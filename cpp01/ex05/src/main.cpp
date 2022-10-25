/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 13:50:39 by fpolycar      #+#    #+#                 */
/*   Updated: 2022/10/11 14:57:31 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl		harl;
	std::string str;
	
	std::cout << "what do you want Harl to do: DEBUG, INFO, WARNING, ERROR" << std::endl;
	std::cin >> str;
	harl.complain(str);
}