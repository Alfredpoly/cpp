/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/24 15:05:29 by fpolycar      #+#    #+#                 */
/*   Updated: 2022/10/27 15:13:48 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

void	impossible(void)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
}

bool validation(std::string buff)
{
	char last_char = buff.back();

	for (int i = 0; i < buff.length() - 1; i++) {
     	if(isalpha(buff[i]))
			return false;
	}
	if ((buff.length() > 1 && !(last_char == 'f' || last_char == 'F')) && !isdigit(last_char))
		return false;
	return true;
} 

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cerr << "No input detected." << std::endl;
		return (1);
	}
	std::string buff = argv[1];
	if (argc !=2 || !validation(buff))
	{
		std::cerr << "Wrong input detected. Can only convert one scalar type at a time." << std::endl;
		return (1);
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
	std::cout << convert.getCharString() << convert.getIntString() << convert.getFloatString() << convert.getDoubleString();
}