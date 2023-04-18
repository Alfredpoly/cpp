/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 15:39:47 by fpolycar      #+#    #+#                 */
/*   Updated: 2023/03/03 13:32:00 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
	// const Animal* meta = new Animal();
	const Animal* doggo = new Dog();
	const Animal* kitty = new Cat();
	delete doggo;
	delete kitty;
	const Animal* animals[4];
	int i;
	for (i = 0; i < 4; i++)
	{
		if (i < 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	for (i = 0; i < 4; i++)
	{
		delete(animals[i]);
	}
	return 0;
}