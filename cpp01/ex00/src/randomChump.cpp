/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RandomChump.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 12:47:31 by fpolycar      #+#    #+#                 */
/*   Updated: 2022/10/06 13:06:41 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump( std::string name )
{
	Zombie zombi(name);
	zombi.announce();
}