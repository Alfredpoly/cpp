/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 11:30:56 by fpolycar      #+#    #+#                 */
/*   Updated: 2023/02/24 09:30:15 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap Bob("Bob"), John("John"), Alfred("Alfred");

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
	Alfred.beRepaired(2);
	Alfred.beRepaired(2);
	Alfred.beRepaired(2);
	Alfred.beRepaired(2);
	Alfred.beRepaired(2);
	Alfred.beRepaired(2);
	Alfred.beRepaired(2);
	Alfred.beRepaired(2);
	Alfred.beRepaired(2);
	Alfred.beRepaired(2);
	Alfred.beRepaired(2);
}