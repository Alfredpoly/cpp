/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 14:04:33 by fpolycar      #+#    #+#                 */
/*   Updated: 2023/02/24 11:04:10 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H
#include "ClapTrap.hpp"
 
// Class definition 
class ScavTrap : public ClapTrap
{
public:
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap( const ScavTrap &rhs); 
	ScavTrap& operator=( const ScavTrap &rhs);
	void attack(const std::string& target);
	void guardGate();
}; 
 
#endif