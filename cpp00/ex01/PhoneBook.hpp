/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:44:12 by llaurenc          #+#    #+#             */
/*   Updated: 2024/01/25 10:44:12 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
class PhoneBook {

private:

	Contact		_Tab[8];
	int const	_maxContact;
	int			_nbContact;

	void	_addContact( void );
	void	_getInput( void );
	void	_listContact( void ) const;


public:

	PhoneBook(void);
	~PhoneBook();

};


#endif 

