/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 15:39:47 by fpolycar      #+#    #+#                 */
/*   Updated: 2023/02/28 12:48:05 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* doggo = new Dog();
	const Animal* kitty = new Cat();
	delete doggo;
	delete kitty;
	const Animal* aBunch[4];
	for (int i = 0; i < 4; i++)
	{
		if (i < 2)
			aBunch[i] = new Dog();
		else
			aBunch[i] = new Cat();
	}
	for (int i = 0; i < 4; i++)
	{
		delete(aBunch[i]);
	}
	return 0;
}