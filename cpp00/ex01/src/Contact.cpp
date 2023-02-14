/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/26 11:16:05 by fpolycar      #+#    #+#                 */
/*   Updated: 2022/11/03 12:13:49 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {};

Contact::~Contact() {};

void	Contact::print_contacts()
{
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << this->format(this->name);
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << this->format(this->last_name);	
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << this->format(this->nickname);
	std::cout << "|" << std::endl;
}

void	Contact::print_contact()
{
	std::cout << std::left << std::setw(16);
	std::cout << "name: " << this->name << std::endl;
	std::cout << std::left << std::setw(16);
	std::cout << "last name: " << this->last_name << std::endl;
	std::cout << std::left << std::setw(16);
	std::cout << "nickname: " << this->nickname << std::endl;
	std::cout << std::left << std::setw(16);
	std::cout << "phone: " << this->phone << std::endl;
	std::cout << std::left << std::setw(16);
	std::cout << "darkest secret: " << this->darkest_secret << std::endl;
}

void	Contact::giveValue(std::string *val)
{
	std::getline (std::cin, *val);
	if (std::cin.eof())
        exit(0);
	if (val->empty())
	{
		std::cout << "You can't have empty fields try again\n";
		giveValue(val);
	}
}

void	Contact::create_contact()
{
	std::cin.ignore(256, '\n');
	std::cout << "what's your name ?" << std::endl;
	giveValue(&this->name);
	std::cout << "what's your last name ?" << std::endl;
	giveValue(&this->last_name);
	std::cout << "what's your nickname ?" << std::endl;
	giveValue(&this->nickname);
	std::cout << "what's your phone number ?" << std::endl;
	giveValue(&this->phone);
	std::cout << "what's your darkest secret ?" << std::endl;
	giveValue(&this->darkest_secret);
}

std::string Contact::format(std::string str)
{
	std::string	tmp;

	if (str.length() >=9)
		tmp = str.substr(0, 9) + '.';
	else
		tmp = str;
	return (tmp);
}