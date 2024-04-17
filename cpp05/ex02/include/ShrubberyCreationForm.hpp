/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:11:08 by llaurenc          #+#    #+#             */
/*   Updated: 2024/04/17 14:04:22 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Header-protection
#pragma once

// includes
#include <string>
#include <iostream>
#include "AForm.hpp"

// classes

class ShrubberyCreationForm : public AForm
{
	public :
		
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm const & cpy);
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & other);
			
		void	execute(const Bureaucrat & executor) const;
		
	private :
};
