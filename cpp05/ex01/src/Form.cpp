/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:34:27 by llaurenc          #+#    #+#             */
/*   Updated: 2024/04/15 16:29:47 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default"), _signed(false), _grade_signed(150), _grade_exec(150)
{
	std::cout << "Form Default constructor called" << std::endl;
}

Form::Form(std::string name, int issigned, int exec) : _name(name), _signed(false), _grade_signed(issigned), _grade_exec(exec)
{
	if (this->getGradeSigned() < 1 || this->getGradeExec() < 1) throw GradeTooHighException();
	if (this->getGradeSigned() > 150 || this->getGradeExec() > 150) throw GradeTooLowException();
	std::cout << "Form constructor with parameter called" << std::endl;
}

Form::Form(Form const & cpy) : _name(cpy.getName()), _signed(false), _grade_signed(cpy.getGradeSigned()), _grade_exec(cpy.getGradeExec())
{
	std::cout << "Form copy constructor called" << std::endl;
	*this = cpy;
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}

Form & Form::operator=(Form const & other)
{
	if (this == &other)
        return (*this);
	this->_signed = other.getSigned();
	return (*this);
}

std::string Form::getName() const
{
	return (_name);
}

bool Form::getSigned() const 
{
	return (_signed);
}

int Form::getGradeSigned() const 
{
	return (_grade_signed);
}

int Form::getGradeExec() const
{
	return (_grade_exec);
}

void Form::beSigned(Bureaucrat & Bur)
{
	if (Bur.getGrade() > this->getGradeSigned()) throw GradeTooLowException();
	this->_signed = true;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Form Grade is too high.");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Form Grade is too low.");
}

std::ostream &operator<<(std::ostream & o, const Form & a)
{
	o << a.getName() << " form, grade required to sign: " << a.getGradeSigned() << ", grade required to execute: " << a.getGradeExec() << ", is signed: " << a.getSigned();
	return (o);
}
