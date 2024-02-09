/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:44:08 by llaurenc          #+#    #+#             */
/*   Updated: 2024/01/25 10:44:08 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact
{
private:
   std::string	_fname;
   std::string	_lname;
   std::string	_nname;
   std::string	_number;
   std::string	_secret;


public:
    Contact(void);
    ~Contact();

    void	CreateContact( void );
    void	PrintContact ( void ) const ;
    bool	GoodSaisie (std::string input) const ;
	bool	GoodSaisieD (std::string input) const ;
	bool	GoodSaisieSpace (std::string input) const ;
	void	PrintLine( int index) const;
    void	PrintLineBis( std::string txt ) const;
};


#endif