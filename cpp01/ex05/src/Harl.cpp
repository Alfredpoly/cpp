/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 14:08:22 by fpolycar      #+#    #+#                 */
/*   Updated: 2022/10/11 15:55:42 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*harlptr[])() = {&Harl::debug,
	&Harl::info,
	&Harl::warning,
	&Harl::error};
	
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int found = std::find(levels, levels + 4, level) - levels;
	if (found < 0 || found > 3)
		std::cout << "Wrong input" << std::endl;
	else
		(this->*harlptr[found])();
}