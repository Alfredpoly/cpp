/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 16:17:20 by fpolycar      #+#    #+#                 */
/*   Updated: 2022/10/18 11:27:41 by fpolycar      ########   odam.nl         */
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

void Dog::makeSound() const
{
	std::cout << "Wooaf" << std::endl;
}
