/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: fpolycar <fpolycar@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/26 11:34:16 by fpolycar      #+#    #+#                 */
/*   Updated: 2022/11/08 13:15:08 by fpolycar      ########   odam.nl         */
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
		void	show_search_header(void);
	public:
		Phonebook();
		~Phonebook();
		void	add_contact(void);
		void	search_contact(void);
};

#endif