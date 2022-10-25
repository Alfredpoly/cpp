/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 16:17:32 by fpolycar      #+#    #+#                 */
/*   Updated: 2022/10/18 14:02:43 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include <string>
 
// Class definition 
class Animal
{
protected: 
	std::string _type;
	Animal();
	Animal(std::string newType);
 
public:
	virtual ~Animal();
	Animal& operator=( const Animal &rhs);
	std::string getType() const;
	void setType(std::string _type);
	virtual void makeSound() const;
}; 

#endif
