/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 13:59:45 by fpolycar      #+#    #+#                 */
/*   Updated: 2022/10/11 15:35:32 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H
#include <iostream>
#include <string>
#include <fstream>


class Harl
{
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	typedef void (Harl::*harlptr)(void);
public:
	Harl();
	~Harl();
	void complain( std::string level );
};

#endif