/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 16:17:35 by fpolycar      #+#    #+#                 */
/*   Updated: 2022/10/17 16:25:13 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
// Constructor initializes attributes to 0 by default 
WrongAnimal::WrongAnimal()
	: _type("default")
{
	std::cout << "Default WrongAnimal has been constructed" << std::endl;
}
 
WrongAnimal::WrongAnimal( const WrongAnimal& rhs)
{
	*this = rhs;
}
 
WrongAnimal::WrongAnimal(std::string newType) 
	: _type(newType)
{
	std::cout << "WrongAnimal " << newType << " has been constructed" << std::endl;

}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal has been destroyed" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=( const WrongAnimal& rhs )
{
	return *this;
}

// Getters 
std::string WrongAnimal::getType() const { return _type; }

void WrongAnimal::makeSound() const
{
	std::cout << "Default animal sound" << std::endl;
}

// Setters 
void WrongAnimal::setType(std::string newType) { _type = newType; }
