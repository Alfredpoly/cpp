/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 16:17:03 by fpolycar      #+#    #+#                 */
/*   Updated: 2023/02/27 10:35:08 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat has been constructed" << std::endl;

}

WrongCat::WrongCat( const WrongCat& rhs) : WrongAnimal(rhs.getType())
{
	std::cout << "WrongCat has been copied" << std::endl;
}

WrongCat& WrongCat::operator=( const WrongCat& rhs)
{
	WrongAnimal(rhs.getType());
	std::cout << "WrongCat has been coppied through assignment" << std::endl;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat has been destroyed" << std::endl;

}

void WrongCat::makeSound() const
{
	std::cout << "Wooaf" << std::endl;
}