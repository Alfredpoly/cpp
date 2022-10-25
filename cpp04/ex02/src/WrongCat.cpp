/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 16:17:03 by fpolycar      #+#    #+#                 */
/*   Updated: 2022/10/18 11:30:36 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat has been constructed" << std::endl;

}
 
WrongCat::~WrongCat()
{
	std::cout << "WrongCat has been destroyed" << std::endl;

}

void WrongCat::makeSound() const
{
	std::cout << "Wooaf" << std::endl;
}