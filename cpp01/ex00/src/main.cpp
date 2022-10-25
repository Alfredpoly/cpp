/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 12:59:36 by fpolycar      #+#    #+#                 */
/*   Updated: 2022/10/06 13:13:48 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie	*zomb;
	zomb = newZombie("newZomb");
	zomb->announce();
	randomChump("randomZomb");
	delete zomb;
	return 0;
}