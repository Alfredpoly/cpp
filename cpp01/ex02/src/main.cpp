/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 13:00:33 by fpolycar      #+#    #+#                 */
/*   Updated: 2022/12/02 12:22:06 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>

int main()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << "adress brain: " << &brain << std::endl;	
	std::cout << "adress stringPTR: " << stringPTR << std::endl;	
	std::cout << "adress stringREF: " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "value stringPTR: " << *stringPTR << std::endl;	
	std::cout << "value brain: " << brain << std::endl;	
	std::cout << "value stringREF: " << stringREF << std::endl;	
}