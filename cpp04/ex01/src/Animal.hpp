/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 16:17:32 by fpolycar      #+#    #+#                 */
/*   Updated: 2022/10/18 13:45:25 by fpolycar      ########   odam.nl         */
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
 
public: 
// Constructor 
	Animal(); 
	Animal( const Animal &rhs); 
	Animal(std::string newType);
	virtual ~Animal(); 
	Animal& operator=( const Animal &rhs); 
// Getters 
	std::string getType() const; 
// Setters 
	void setType(std::string _type);
	virtual void makeSound() const;
}; 
 
#endif
