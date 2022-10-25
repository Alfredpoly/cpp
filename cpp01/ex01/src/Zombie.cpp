/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 12:59:39 by fpolycar      #+#    #+#                 */
/*   Updated: 2022/10/10 12:57:12 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
// Constructor initializes attributes to 0 by default 
Zombie::Zombie() {}

Zombie::~Zombie()
{
	std::cout << this->_name << " destroyed" << std::endl;
}
 
// Setters 
void Zombie::setName(std::string newName) { _name = newName; }

// Output
void Zombie::announce()
{
  std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl; 
}

