/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 16:17:22 by fpolycar      #+#    #+#                 */
/*   Updated: 2022/10/18 13:02:10 by fpolycar      ########   odam.nl         */
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
	void makeSound() const;
}; 
 
#endif
