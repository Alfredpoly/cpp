/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 11:30:56 by fpolycar      #+#    #+#                 */
/*   Updated: 2022/10/17 13:43:29 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap Bob("Bob"), John("John"), Pjotr("Pjotr");

	Bob.attack("John");
	Bob.attack("John");
	Bob.attack("John");
	Bob.attack("John");
	Bob.attack("John");
	Bob.attack("John");
	Bob.attack("John");
	Bob.attack("John");
	Bob.attack("John");
	Bob.attack("John");
	Bob.attack("John");
	John.takeDamage(10);
	Bob.takeDamage(10);
	Bob.attack("John");
	Pjotr.beRepaired(2);
	Pjotr.beRepaired(2);
	Pjotr.beRepaired(2);
	Pjotr.beRepaired(2);
	Pjotr.beRepaired(2);
	Pjotr.beRepaired(2);
	Pjotr.beRepaired(2);
	Pjotr.beRepaired(2);
	Pjotr.beRepaired(2);
	Pjotr.beRepaired(2);
	Pjotr.beRepaired(2);
}