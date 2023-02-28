/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 16:17:13 by fpolycar      #+#    #+#                 */
/*   Updated: 2023/02/27 09:51:33 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
#define WRONGCAT_H
#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public: 
	WrongCat();
	WrongCat( const WrongCat& rhs);
	WrongCat &operator=( const WrongCat& rhs);
	~WrongCat();
	void makeSound() const;
}; 
 
#endif
