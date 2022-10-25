/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 11:30:56 by fpolycar      #+#    #+#                 */
/*   Updated: 2022/10/17 14:54:22 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ClapTrap Bob("Bob"), Henry("Henry"), Theodore("Theodore");
	ScavTrap George("George"), John("John");

	Bob.attack("Henry");
	Bob.attack("Henry");
	Henry.takeDamage(2);
	Bob.takeDamage(10);
	Bob.attack("Henry");
	Theodore.beRepaired(2);
	George.attack("Bob");
	John.guardGate();
	George.takeDamage(3);
	John.beRepaired(4);
}