/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 12:59:39 by fpolycar      #+#    #+#                 */
/*   Updated: 2022/12/02 12:01:55 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie::Zombie()
	: _name(0)
{

}
 
Zombie::Zombie( const Zombie& rhs)
{
	*this = rhs;
}
 
Zombie::Zombie(std::string newName) 
	: _name(newName)
{

}

Zombie::~Zombie()
{
	std::cout << this->_name << " destroyed" << std::endl;
}

Zombie&	Zombie::operator=( const Zombie& rhs )
{
	return *this;
}

std::string Zombie::getName() { return _name; }

void Zombie::setName(std::string newName) { _name = newName; }

void Zombie::announce()
{
  std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl; 
}
