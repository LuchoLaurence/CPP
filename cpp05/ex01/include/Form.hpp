/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:34:09 by llaurenc          #+#    #+#             */
/*   Updated: 2024/04/15 16:27:42 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Header-protection
#pragma once

// includes
#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

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

class Bureaucrat;

class Form
{
	private :
		const std::string _name;
		bool _signed;
		const int _grade_signed;
		const int _grade_exec;
		
	public :
		Form();
		Form(std::string name, int signed, int exec);
		Form(Form const & cpy);
		~Form();
		Form & operator=(Form const & other);
		
		//getter
		std::string getName() const;
		bool getSigned() const;
		int getGradeSigned() const;
		int getGradeExec() const;

		void	beSigned(Bureaucrat & Bur);
		
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

std::ostream &operator<<(std::ostream & o, const Form  & a);
