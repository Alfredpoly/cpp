/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 16:17:35 by fpolycar      #+#    #+#                 */
/*   Updated: 2023/02/27 11:12:46 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
// Constructor initializes attributes to 0 by default 
Animal::Animal()
	: _type("default")
{
	std::cout << "Default Animal has been constructed" << std::endl;
}
 
Animal::Animal( const Animal& rhs) : _type(rhs._type)
{
	std::cout << "Animal has been copied" << std::endl;
}
 
Animal::Animal(std::string newType) 
	: _type(newType)
{
	std::cout << "Animal " << newType << " has been constructed" << std::endl;

}

Animal::~Animal()
{
	std::cout << "Animal "<< _type << " has been destroyed" << std::endl;
}

Animal&	Animal::operator=( const Animal& rhs )
{
	return *this;
}

// Getters 
std::string Animal::getType() const { return _type; }

void Animal::makeSound() const
{
	std::cout << "Default animal sound" << std::endl;
}

// Setters 
void Animal::setType(std::string newType) { _type = newType; }
