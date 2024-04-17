/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 11:29:30 by llaurenc          #+#    #+#             */
/*   Updated: 2024/04/15 13:52:21 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Header-protection
#pragma once

// includes
#include <string>
#include <iostream>
#include "AForm.hpp"

#define RESET "\033[39m"
#define BLACK "\033[30m"
#define GREY "\033[90m"
#define RED "\033[31m"
#define CYAN "\033[36m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[94m"
#define MAGENTA "\033[35m"

// classes

class AForm;

class Bureaucrat
{
	private :
		const std::string _name;
		size_t _grade;
	
	public :
		Bureaucrat();
		Bureaucrat(std::string name, size_t grade);
		Bureaucrat(Bureaucrat const & cpy);
		~Bureaucrat();
		Bureaucrat & operator=(Bureaucrat const & other);

		//getter
		std::string getName(void) const;
		size_t getGrade(void) const;

		//members functions
		void	incrementGrade();
		void	decrementGrade();
		void	signForm(AForm & formu);
		void	executeForm(AForm const & form);

		
	class GradeTooHighException : public std::exception
	{
		public :
			virtual const char *what() const throw();
	};
	
	class GradeTooLowException : public std::exception
	{
		public :
			virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream & o, const Bureaucrat  & a);
