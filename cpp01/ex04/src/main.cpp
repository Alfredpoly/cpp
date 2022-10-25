/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 11:20:37 by fpolycar      #+#    #+#                 */
/*   Updated: 2022/10/11 13:28:08 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main()
{
	std::string	filename;
	std::string	filecontent;
	std::string	s1;
	std::string	s2;
	size_t		found;

	found = 0;
	std::cout << "enter filename" << std::endl;
	std::cin >> filename;
	std::ifstream infile (filename);
	if (infile.fail()){
        std::cout << "file doesn't exist!" << std::endl;
		exit(1);
    }
	std::cout << "enter s1" << std::endl;
	std::cin >> s1;
	std::cout << "enter s2" << std::endl;
	std::cin >> s2;

	std::ofstream outfile (filename + ".replace");
	if (infile)
	{
		while (std::getline(infile, filecontent))
		{
			while (filecontent.find(s1, found) != std::string::npos)
			{
				found = filecontent.find(s1, found);
				filecontent.erase(found, s1.length());
				filecontent.insert(found, s2);
			}
			outfile << filecontent << std::endl;
		}
	}
	outfile.close();	
	infile.close();	
}
