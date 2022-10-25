/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/24 15:05:29 by fpolycar      #+#    #+#                 */
/*   Updated: 2022/10/25 15:34:53 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

void	impossible(void)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
}

int main(int argc, char **argv)
{
	std::string buff = argv[1];

	if (argc < 2 || argc > 2)
	{
		std::cerr << "Wrong input detected. Can only convert one scalar type at a time." << std::endl;
		return (0);
	}
	if (buff == "nan" || buff == "-inf" || buff == "+inf")
	{
		impossible();
		std::cout << "float: " << buff << "f" << std::endl;
		std::cout << "double: " << buff << std::endl;
		return 0;
	}
	if (buff == "nanf" || buff == "-inff" || buff == "+inff")
	{
		impossible();
		std::cout << "float: " << buff << std::endl;
		std::cout << "double: " << buff.substr(0, buff.length() - 1) << std::endl;
		return 0;
	}
	Convert convert(buff);
}