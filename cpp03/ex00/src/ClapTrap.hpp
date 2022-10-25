/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 11:30:51 by fpolycar      #+#    #+#                 */
/*   Updated: 2022/10/17 12:00:12 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H
#include <iostream>
#include <string>
 
// Class definition 
class ClapTrap
{
private: 
	std::string _name;
	int _hit;
	int _energy;
	int _attack;
 
public:
	ClapTrap(std::string name); 
	ClapTrap( const ClapTrap &rhs); 
	ClapTrap(std::string newName, int newHit, int newEnergy, int newAttack);
	~ClapTrap(); 
	ClapTrap& operator=( const ClapTrap &rhs);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
}; 
 
#endif
