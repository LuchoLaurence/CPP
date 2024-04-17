/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 11:29:28 by llaurenc          #+#    #+#             */
/*   Updated: 2024/04/17 14:30:42 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <cstdlib>

int	main(void)
{
	srand(time(NULL));
	std::cout << GREEN << "----- BUREAUCRATS CREATION-----" << RESET << std::endl << std::endl;

	Bureaucrat	noob = Bureaucrat("Noob Nathan", 142);
	Bureaucrat	average = Bureaucrat("Average Andy", 65);
	Bureaucrat	pro = Bureaucrat("Pro Peter", 6);

	std::cout << std::endl << "Three bureaucrats created:\n"
			"\t1) " << noob << "\n"
			"\t2) " << average << "\n"
			"\t3) " << pro << std::endl << std::endl;

	std::cout << RED << "----- FORMS CREATION-----" << RESET << std::endl << std::endl;
	
	ShrubberyCreationForm	ShrubberyCr = ShrubberyCreationForm("Forest");
	RobotomyRequestForm		RotomyRe("RobotForm");
	PresidentialPardonForm	PresidentialPa("PardonForm");

	std::cout << std::endl << "Three forms created:\n"
			"\t1) " << ShrubberyCr << "\n"
			"\t2) " << RotomyRe << "\n"
			"\t3) " << PresidentialPa << std::endl << std::endl;

	std::cout << YELLOW << "----- SIGNING AND EXECUTING SHRUBBERY FORM-----" << RESET << std::endl << std::endl;

	noob.signForm(ShrubberyCr);
	noob.executeForm(ShrubberyCr);
	average.executeForm(ShrubberyCr);
	std::cout << std::endl;

	std::cout << GREEN << "----- SIGNING AND EXECUTING ROBOTOMY REQUEST FORM-----" << RESET << std::endl << std::endl;
	average.executeForm(RotomyRe);
	average.signForm(RotomyRe);
	average.executeForm(RotomyRe);
	
	pro.executeForm(RotomyRe);
	std::cout << std::endl;
	
	std::cout << MAGENTA << "----- SIGNING AND EXECUTING PRESIDENTIAL PARDON FORM-----" << RESET << std::endl << std::endl;
	pro.executeForm(PresidentialPa);
	pro.signForm(PresidentialPa);
	pro.executeForm(PresidentialPa);
	pro.incrementGrade();
	pro.executeForm(PresidentialPa);

	std::cout << std::endl;
	return (0);
}
