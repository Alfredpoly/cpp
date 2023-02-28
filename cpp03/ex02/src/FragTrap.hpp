/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 15:04:00 by fpolycar      #+#    #+#                 */
/*   Updated: 2023/02/24 11:04:20 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
 
// Class definition 
class FragTrap : public ClapTrap
{
public:
	FragTrap(std::string name);
	~FragTrap();
	FragTrap( const FragTrap &rhs); 
	FragTrap& operator=( const FragTrap &rhs);
	void highFivesGuys(void);
}; 
 
#endif