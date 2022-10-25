/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/26 11:34:16 by fpolycar      #+#    #+#                 */
/*   Updated: 2022/10/03 15:23:18 by fpolycar      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H
#include "Contact.hpp"

class	Phonebook {
	private:
		int const	max_contact;
		int			nb_contact;
		Contact		book[8];
	public:
		Phonebook();
		// ~Phonebook();
		void	add_contact(void);
		void	search_contact(void);
		void	show_search_header(void);
};

#endif