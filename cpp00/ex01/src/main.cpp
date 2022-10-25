/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/06 15:49:55 by fpolycar      #+#    #+#                 */
/*   Updated: 2022/10/04 13:30:13 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main(int argc, char **argv)
{
    std::string    		buff;
    Phonebook           p;
    std::string         add ("ADD");
    std::string         search ("SEARCH");
    std::string         exitf ("EXIT");

	std::cout << "What do you wanna do ? (EXIT, ADD, SEARCH) " << std::endl;
    while(1)
    {
	    std::cin >> buff;
        if (add == buff)
            p.add_contact();
        if (search == buff)
            p.search_contact();
        if (exitf == buff)
        {
            std::cout << "bye bye :)" << std::endl;
            exit(0);
        }
    }
}