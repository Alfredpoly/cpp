/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 12:59:36 by fpolycar      #+#    #+#                 */
/*   Updated: 2022/10/10 12:58:28 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *horde;
	int i = 0;
	int	nb;
	std::string	name;

	std::cout << "How many zombie do you want (1-100):" << std::endl;
	std::cin >> nb;
	std::cout << "Name your zombie(s):" << std::endl;
	std::cin >> name;
	horde = zombieHorde(nb, name);
	while (i < nb)
	{
		horde[i].announce();
		i++;
	}
	delete [] horde;
	return 0;
}