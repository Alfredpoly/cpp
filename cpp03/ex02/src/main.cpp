/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 11:30:56 by fpolycar      #+#    #+#                 */
/*   Updated: 2022/10/17 15:14:45 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	ClapTrap Bob("Bob"), Henry("Henry"), Theodore("Theodore");
	ScavTrap George("George"), John("John");
	FragTrap Holice("Holice"), Maurice("Maurice");
	FragTrap Thomas = Holice;
	FragTrap Peter(Maurice);

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
	Peter.highFivesGuys();
	Thomas.attack("John");
	Holice.beRepaired(3);
	Maurice.takeDamage(20);
}