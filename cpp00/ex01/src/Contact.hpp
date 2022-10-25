/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/26 11:16:05 by fpolycar      #+#    #+#                 */
/*   Updated: 2022/10/04 12:15:24 by fpolycar      ########   odam.nl         */
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
	public:
		Contact();
		// ~Contact();
		void	create_contact();
		void	print_contacts();
		void	print_contact();
		std::string	format(std::string str);
		
};

#endif