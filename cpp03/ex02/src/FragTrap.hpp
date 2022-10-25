/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 15:04:00 by fpolycar      #+#    #+#                 */
/*   Updated: 2022/10/17 15:15:01 by fpolycar      ########   odam.nl         */
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
	void highFivesGuys(void);
}; 
 
#endif