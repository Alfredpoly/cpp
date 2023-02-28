/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 16:17:20 by fpolycar      #+#    #+#                 */
/*   Updated: 2023/02/27 10:34:16 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog has been constructed" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog has been destroyed" << std::endl;
}

Dog::Dog( const Dog& rhs) : Animal(rhs.getType())
{
	std::cout << "Dog has been copied" << std::endl;
}

Dog &Dog::operator=( const Dog& rhs)
{
	Animal(rhs.getType());
	std::cout << "Dog has been coppied through assignment" << std::endl;
	return *this;
}


void Dog::makeSound() const
{
	std::cout << "Wooaf" << std::endl;
}
