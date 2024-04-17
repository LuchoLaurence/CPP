/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:46:55 by llaurenc          #+#    #+#             */
/*   Updated: 2024/04/17 16:38:26 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern constructor called" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}

Intern::Intern(Intern const & cpy)
{
	(void) cpy;
	std::cout << "Intern copy constructor called " << std::endl;
}

Intern & Intern::operator=(Intern const & other)
{
	(void) other;
	return (*this);
}

AForm *Intern::makeform(std::string form, std::string target)
{
	size_t i;
	std::string	forms[3] = {"Shrubbery" , "Presidential", "Robotomy"};

	for (i = 0; i < 3; i++)
	{
		if (form == forms[i])
			break ;
	}
	switch (i)
	{
	case 0:
		std::cout << "Intern creates " << "Shrubbery" << std::endl;
		return (new ShrubberyCreationForm(target));
		break;
	case 1:
		std::cout << "Intern creates " << "Presidential" << std::endl;
		return (new PresidentialPardonForm(target));
		break;
	case 2:
		std::cout << "Intern creates " << "Robotomy" << std::endl;
		return (new RobotomyRequestForm(target));
		break;
	default:
		std::cout << "Intern cannot find form." << std::endl;
		return (NULL);
		break;
	}
}
