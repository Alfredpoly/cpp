/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex0.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/06 15:49:55 by fpolycar      #+#    #+#                 */
/*   Updated: 2022/06/13 11:52:17 by fpolycar      ########   odam.nl         */
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
        while (argv[i] != NULL)
        {
            j = 0;
            while (argv[i][j] != '\0')
            {
                if (argv[i][j] >= 97 && argv[i][j] <= 122)
                    argv[i][j] = argv[i][j] - 32;
                std::cout << argv[i][j];
                j++;
            }
            std::cout << ' ';
            i++;
        }
        std::cout << std::endl;
    }
    return 0;
}