/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 12:59:43 by fpolycar      #+#    #+#                 */
/*   Updated: 2022/10/06 11:28:31 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>
#include <iomanip>
#include <string>
 
// Class definition 
class Zombie
{
private: 
	std::string _name;
 
public: 
// Constructor 
	Zombie(); 
	Zombie( const Zombie &rhs); 
	Zombie(std::string newName);
	~Zombie(); 
	Zombie& operator=( const Zombie &rhs); 
// Getters 
	std::string getName(); 
// Setters 
	void setName(std::string _name); 
// Output 
	void announce( void );
	void output();
}; 
 
Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
