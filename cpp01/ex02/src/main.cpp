/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 13:00:33 by fpolycar      #+#    #+#                 */
/*   Updated: 2022/10/10 13:26:27 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>

int main()
{
	std::string brain = "Hi this is brain";
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