/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
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

class AForm
{
	private :
		std::string _name;
		bool _signed;
		int _grade_signed;
		int _grade_exec;
	
	protected :
		std::string _target;

	public :
		AForm();
		AForm(std::string name, int signed, int exec);
		AForm(AForm const & cpy);
		virtual ~AForm();
		AForm & operator=(AForm const & other);
		
		//getter
		std::string getName() const;
		bool getSigned() const;
		int getGradeSigned() const;
		int getGradeExec() const;

		void		setName(std::string const x) { _name = x; };
		void		setSign(bool const x) { _signed = x; };
		void		setGrade(int const x) { _grade_signed = x; };
		void		setExecute(int const x) { _grade_exec = x; };

		void	beSigned(Bureaucrat & Bur);
		virtual void execute(const Bureaucrat & executor) const = 0;
		
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

		class NotSignedException : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};
		
};

std::ostream &operator<<(std::ostream & o, const AForm  & a);
