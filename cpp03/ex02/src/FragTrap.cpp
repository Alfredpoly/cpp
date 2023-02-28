/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 15:04:45 by fpolycar      #+#    #+#                 */
/*   Updated: 2023/02/27 13:33:38 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hit = 100;
	_energy = 100;
	_attack = 30;
	std::cout << "FragTrap " << name << " has been constructed." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " has been destructed." << std::endl;
}

FragTrap::FragTrap( const FragTrap& rhs) : ClapTrap(rhs._name)
{
	_name = rhs._name;
	_hit = rhs._hit;
	_energy = rhs._energy;
	_attack = rhs._attack;
	*this = rhs;
}

FragTrap&	FragTrap::operator=( const FragTrap& rhs )
{
	_name = rhs._name;
	_hit = rhs._hit;
	_energy = rhs._energy;
	_attack = rhs._attack;
	return *this;
}


void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << _name << " HIGH FIVESSSS" << std::endl; 
}