/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex00.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/06 15:49:55 by fpolycar      #+#    #+#                 */
/*   Updated: 2022/11/08 13:10:32 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv) {

    int i;
    int j;

    i = 1;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while (--argc)
        {
            argv++;
		    for (size_t i = 0; i < strlen(*argv); i++)
			    (*argv)[i] = std::toupper((*argv)[i]);
		        std::cout << *argv << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}