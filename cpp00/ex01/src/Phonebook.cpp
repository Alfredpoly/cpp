/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/26 12:02:24 by fpolycar      #+#    #+#                 */
/*   Updated: 2022/10/04 13:45:55 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

Phonebook::Phonebook() : max_contact(8)
{
	this->nb_contact = 0;
}

void	Phonebook::add_contact()
{
	if (nb_contact == 8)
		nb_contact = 0;
	this->book[this->nb_contact].create_contact();
	this->nb_contact++;
	return;
}

void	Phonebook::search_contact()
{
	int			i;
	std::string	buff;

	i = 0;
	std::cout << "\n|index     |first name|last name |nickname  |" << std::endl;
	while (i != 8)
	{
		std::cout << "|";
		std::cout << std::setw(10);
		std::cout << i;
		this->book[i++].print_contacts();
	}
	std::cout << "Enter an index to view the full contact:" << std::endl;
	std::cin >> buff;
	if (std::isdigit(buff[0]) == 0 || buff.length() > 1)
	{
		std::cout << "Index out of range (0-7) or not a digit" << std::endl;
	}
	else if (std::stoi(buff) > 7 || std::stoi(buff) < 0 )
		std::cout << "Index out of range (0-7)" << std::endl;
	else
		this->book[std::stoi(buff)].print_contact();
	return;
}

