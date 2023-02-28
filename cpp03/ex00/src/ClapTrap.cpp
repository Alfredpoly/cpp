/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 11:30:43 by fpolycar      #+#    #+#                 */
/*   Updated: 2023/02/27 13:41:52 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
	: _name(name), _hit(10), _energy(10), _attack(0)
{
	std::cout << "ClapTrap " << name << " has been constructed." << std::endl;
}
 
ClapTrap::ClapTrap( const ClapTrap& rhs)
{
	*this = rhs;
}
 
ClapTrap::ClapTrap(std::string newName, int newHit, int newEnergy, int newAttack) 
	: _name(newName), _hit(newHit), _energy(newEnergy), _attack(newAttack)
{

}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " has been destructed." << std::endl;
}

ClapTrap&	ClapTrap::operator=( const ClapTrap& rhs )
{
	_name = rhs._name;
	_attack = rhs._attack;
	_hit = rhs._hit;
	_energy = rhs._energy;
	return *this;
}
 
void ClapTrap::attack(const std::string& target)
{
	if (_hit <= 0)
	{
		std::cout << _name << " is dead, he can't attack" << std::endl;
		return;
	}
	else if (_energy <= 0 && _hit > 1) 
		std::cout << _name << " doesn't have any energy" << std::endl;
	else
	{
		_energy--;
		std::cout  << _name << " attacks " << target << " causing " << _attack << " points of damage!"<< std::endl;	
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit <= 0)
	{
		std::cout << _name << " is already dead" << std::endl;
		return;
	}
	else if (_hit - amount <= 0 && _hit > 0) 
	{
		_hit -= amount;
		std::cout << _name << " is now dead, he took too much damage -> " << amount << std::endl;
	}
	else
	{
		_hit -= amount;
		std::cout  << _name << " took " << amount << " of damage and has now " << _hit << "points of life" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hit <= 0)
	{
		std::cout << _name << " is dead he can't be healed" << std::endl;
		return;
	}
	else if (_energy <= 0) 
		std::cout << _name << " doesn't have any energy" << std::endl;
	else
	{
		_energy--;
		_hit += amount;
		std::cout << _name << " gain " << amount << " of health, and now has " << _hit << " points of health" << std::endl;
	}
}
