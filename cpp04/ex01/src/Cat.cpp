/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 16:17:03 by fpolycar      #+#    #+#                 */
/*   Updated: 2022/10/18 13:29:35 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), Brain(new class Brain())
{
	std::cout << "Cat has been constructed" << std::endl;
}
 
Cat::~Cat()
{
	delete(Brain);
	std::cout << "Cat has been destroyed" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Miaouu" << std::endl;
}