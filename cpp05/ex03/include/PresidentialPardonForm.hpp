/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:07:18 by llaurenc          #+#    #+#             */
/*   Updated: 2024/04/17 14:04:38 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Header-protection
#pragma once

// includes
#include <string>
#include <iostream>
#include "AForm.hpp"

// classes

class PresidentialPardonForm : public AForm
{
	public :
		
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const & cpy);
		PresidentialPardonForm & operator=(PresidentialPardonForm const & other);

		void	execute(Bureaucrat const & executor) const;
		
	private :
};
