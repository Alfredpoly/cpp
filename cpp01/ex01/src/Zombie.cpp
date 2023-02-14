/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 12:59:39 by fpolycar      #+#    #+#                 */
/*   Updated: 2022/12/02 12:21:09 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie::Zombie() {}

Zombie::~Zombie()
{
	std::cout << this->_name << " destroyed" << std::endl;
}
 
void Zombie::setName(std::string newName) { _name = newName; }

void Zombie::announce()
{
  std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl; 
}

