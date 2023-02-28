/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 16:17:20 by fpolycar      #+#    #+#                 */
/*   Updated: 2023/02/27 13:00:25 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), Brain(new class Brain())
{
	std::cout << "Dog has been constructed" << std::endl;
}

Dog::~Dog()
{
	delete(Brain);
	std::cout << "Dog has been destroyed" << std::endl;
}

Dog::Dog( const Dog& rhs) : Animal(rhs.getType())
{
	Brain = rhs.Brain;
	std::cout << "Dog has been copied" << std::endl;
}

Dog &Dog::operator=( const Dog& rhs)
{
	_type = rhs._type;
	Brain = rhs.Brain;
	std::cout << "Dog has been coppied through assignment" << std::endl;
	return *this;
}


void Dog::makeSound() const
{
	std::cout << "Wooaf" << std::endl;
}
