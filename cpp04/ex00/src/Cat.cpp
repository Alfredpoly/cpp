/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 16:17:03 by fpolycar      #+#    #+#                 */
/*   Updated: 2023/02/27 10:33:21 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat has been constructed" << std::endl;
}
 
Cat::~Cat()
{
	std::cout << "Cat has been destroyed" << std::endl;
}

Cat::Cat(const Cat& rhs) : Animal(rhs.getType())
{
	std::cout << "Cat has been copied" << std::endl;
}

Cat& Cat::operator=( const Cat& rhs)
{
	Animal(rhs.getType());
	std::cout << "Cat has been coppied through assignment" << std::endl;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Miaouu" << std::endl;
}