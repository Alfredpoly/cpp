/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 12:59:43 by fpolycar      #+#    #+#                 */
/*   Updated: 2022/12/02 12:21:03 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>
#include <iomanip>
#include <string>
 
class Zombie
{
private: 
	std::string _name;
 
public: 
	Zombie(); 
	~Zombie(); 
	Zombie& operator=( const Zombie &rhs); 
	void setName(std::string _name); 
	void announce();
}; 

Zombie* zombieHorde( int N, std::string name );

#endif
