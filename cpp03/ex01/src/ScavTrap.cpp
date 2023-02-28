/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 14:04:30 by fpolycar      #+#    #+#                 */
/*   Updated: 2023/02/27 13:32:31 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hit = 100;
	_energy = 50;
	_attack = 20;
	std::cout << "ScavTrap " << name << " has been constructed." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " has been destructed." << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& rhs) : ClapTrap(rhs._name)
{
	_name = rhs._name;
	_hit = rhs._hit;
	_energy = rhs._energy;
	_attack = rhs._attack;
	*this = rhs;
}

ScavTrap&	ScavTrap::operator=( const ScavTrap& rhs )
{
	_name = rhs._name;
	_hit = rhs._hit;
	_energy = rhs._energy;
	_attack = rhs._attack;
	return *this;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in Gate Keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target)
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
		std::cout << "ScavTrap " << _name << " attacks " << target << " causing " << _attack << " points of damage!"<< std::endl;	
	}
}
