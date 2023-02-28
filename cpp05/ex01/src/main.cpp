/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 14:20:54 by fpolycar      #+#    #+#                 */
/*   Updated: 2023/02/28 13:29:24 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	std::cout << GREEN << "--------------[  form level too high  ]--------------" << RESET_COLOR << std::endl;
	std::cout << BLUE << "[  sign level = -1  ]" << RESET_COLOR << std::endl;
	try
	{
		Form High1("High", -1, 23);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET_COLOR << RESET_COLOR << std::endl;
	}
	std::cout << BLUE << "[  exec level = -1  ]" << RESET_COLOR << std::endl;
	try
	{
		Form High2("High", 23, -1);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET_COLOR << RESET_COLOR << std::endl;
	}
	std::cout << GREEN << "--------------[  form level too low   ]--------------" << RESET_COLOR << std::endl;
	std::cout << BLUE << "[  sign level = 600  ]" << RESET_COLOR << std::endl;
	try
	{
		Form Low1("Low", 600, 23);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET_COLOR << RESET_COLOR << std::endl;
	}
	std::cout << BLUE << "[  exec level = 700  ]" << RESET_COLOR << std::endl;
	try
	{
		Form Low2("Low", 23, 700);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET_COLOR << RESET_COLOR << std::endl;
	}

	std::cout << std::endl << GREEN << "--------------[ Lets sign some forms! ]--------------" << RESET_COLOR << std::endl << std::endl;
	Bureaucrat Henry("Henry", 140), Bob("Bob", 2), George("George", 75);

	std::cout << std::endl << BLUE << "--------------[ Form1 (5, 23) ]--------------" << RESET_COLOR << std::endl << std::endl;
	Form Form1("Form1", 5, 23);

	std::cout << std::endl << MAGENTA << "--------------[ vv Signing vv ]--------------" << RESET_COLOR << std::endl << std::endl;
	Henry.signForm(Form1);
	George.signForm(Form1);
	Bob.signForm(Form1);
	
	
	std::cout << std::endl << BLUE << "--------------[ Form2 (80, 3) ]--------------" << RESET_COLOR << std::endl << std::endl;
	Form Form2("Form2", 80, 3);
	std::cout << std::endl << MAGENTA << "--------------[ vv Signing vv ]--------------" << RESET_COLOR << std::endl << std::endl;
	Henry.signForm(Form2);
	George.signForm(Form2);
	Bob.signForm(Form2);
	std::cout << std::endl << GREEN << "--------------[ DESTRUCT ]--------------" << RESET_COLOR << std::endl << std::endl;
	return (0) ;
}