/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 14:20:54 by fpolycar      #+#    #+#                 */
/*   Updated: 2023/02/28 14:18:13 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	std::cout << MAGENTA << "--------------[ Lets be bureaucratic ]--------------" << RESET_COLOR << std::endl;
	Bureaucrat Henry("Henry", 140), Bob("Bob", 2), George("George", 40);

	std::cout << MAGENTA << "\n--------------[    Shrubbery Form    ]--------------" << RESET_COLOR << std::endl;
	ShrubberyCreationForm SCF("1: ");
	std::cout << std::endl;
	George.executeForm(SCF);
	std::cout << std::endl;
	Henry.signForm(SCF);
	George.executeForm(SCF);
	std::cout << MAGENTA << "--------------[    Robotomy Form     ]--------------" << RESET_COLOR << std::endl;
	RobotomyRequestForm RRF("2: ");
	std::cout << std::endl;
	Bob.signForm(RRF);
	for (int i = 0; i < 4; i++)
	{
		std::cout << "[    TRY " << i + 1 << "     ]" << std::endl;
		George.executeForm(RRF);
	}

	std::cout << MAGENTA << "\n--------------[  Presidential Form   ]--------------" << RESET_COLOR << std::endl;
	PresidentialPardonForm PPD("3: ");
	std::cout << std::endl;
	Henry.signForm(PPD);
	std::cout << std::endl;
	Bob.signForm(PPD);
	George.executeForm(PPD);
	std::cout << std::endl;
	Bob.executeForm(PPD);
	std::cout << MAGENTA << "\n--------------[      DESTRUCT       ]--------------" << RESET_COLOR << std::endl;


	return (0) ;
}