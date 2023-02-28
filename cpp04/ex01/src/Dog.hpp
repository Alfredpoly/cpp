/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 16:17:22 by fpolycar      #+#    #+#                 */
/*   Updated: 2023/02/27 11:54:53 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H
#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *Brain;
public:
	Dog();
	~Dog();
	Dog( const Dog& rhs);
	Dog &operator=( const Dog& rhs);
	void makeSound() const;
}; 
 
#endif
