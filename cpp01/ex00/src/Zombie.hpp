/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 12:59:43 by fpolycar      #+#    #+#                 */
/*   Updated: 2022/12/02 12:01:40 by fpolycar      ########   odam.nl         */
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
	Zombie(); 
	Zombie( const Zombie &rhs); 
	Zombie(std::string newName);
	~Zombie(); 
	Zombie& operator=( const Zombie &rhs); 
	std::string getName();
	void setName(std::string _name); 
	void announce( void );
	void output();
}; 
 
Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
