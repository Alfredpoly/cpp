/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 16:17:32 by fpolycar      #+#    #+#                 */
/*   Updated: 2022/10/17 16:33:14 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H
#include <iostream>
#include <string>
 
// Class definition 
class WrongAnimal
{
protected: 
	std::string _type;
 
public: 
// Constructor 
	WrongAnimal(); 
	WrongAnimal( const WrongAnimal &rhs); 
	WrongAnimal(std::string newType);
	~WrongAnimal(); 
	WrongAnimal& operator=( const WrongAnimal &rhs); 
// Getters 
	std::string getType() const; 
// Setters 
	void setType(std::string _type);
	virtual void makeSound() const;
}; 
 
#endif
