/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 16:17:13 by fpolycar      #+#    #+#                 */
/*   Updated: 2023/02/27 11:53:25 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H
#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *Brain;
public: 
	Cat();
	Cat( const Cat& rhs);
	Cat &operator=( const Cat& rhs);
	~Cat();
	void makeSound() const;
}; 
 
#endif
