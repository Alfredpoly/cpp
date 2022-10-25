/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NewZombie.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 12:47:53 by fpolycar      #+#    #+#                 */
/*   Updated: 2022/10/06 13:17:39 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie *zomb = new Zombie(name);
	return zomb;	
}
