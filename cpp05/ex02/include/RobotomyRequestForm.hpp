/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:17:24 by llaurenc          #+#    #+#             */
/*   Updated: 2024/04/17 14:04:33 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Header-protection
#pragma once

// includes
#include <string>
#include <iostream>
#include "AForm.hpp"

// classes

class RobotomyRequestForm : public AForm
{
	public :

		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm const & cpy);
		RobotomyRequestForm &operator=(RobotomyRequestForm const & other);

		void	execute(Bureaucrat const & executor) const;
	
	private :
};
