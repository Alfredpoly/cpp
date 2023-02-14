/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/26 11:16:05 by fpolycar      #+#    #+#                 */
/*   Updated: 2022/11/08 13:15:36 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H
# include <iostream>
# include <iomanip>
# include <string>

class Contact {
	private:
		std::string	name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone;
		std::string	darkest_secret;
		void	giveValue(std::string *val);
		std::string	format(std::string str);
	public:
		Contact();
		~Contact();
		void	print_contact();
		void	create_contact();
		void	print_contacts();
		
};

#endif