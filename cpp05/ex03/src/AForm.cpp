/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:34:27 by llaurenc          #+#    #+#             */
/*   Updated: 2024/04/17 10:13:25 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("default"), _signed(false), _grade_signed(150), _grade_exec(150)
{
	std::cout << "AForm Default constructor called" << std::endl;
}

AForm::AForm(std::string name, int issigned, int exec) : _name(name), _signed(false), _grade_signed(issigned), _grade_exec(exec)
{
	if (this->getGradeSigned() < 1 || this->getGradeExec() < 1) throw GradeTooHighException();
	if (this->getGradeSigned() > 150 || this->getGradeExec() > 150) throw GradeTooLowException();
	std::cout << "AForm constructor with parameter called" << std::endl;
}

AForm::AForm(AForm const & cpy) : _name(cpy.getName()), _signed(cpy.getSigned()), _grade_signed(cpy.getGradeSigned()), _grade_exec(cpy.getGradeExec())
{
	std::cout << "AForm copy constructor called" << std::endl;
}

AForm::~AForm()
{
	std::cout << "AForm destructor called" << std::endl;
}

AForm & AForm::operator=(AForm const & other)
{
	if (this == &other)
        return (*this);
	this->_signed = other.getSigned();
	return (*this);
}

std::string AForm::getName() const
{
	return (_name);
}

bool AForm::getSigned() const 
{
	return (_signed);
}

int AForm::getGradeSigned() const 
{
	return (_grade_signed);
}

int AForm::getGradeExec() const
{
	return (_grade_exec);
}

void AForm::beSigned(Bureaucrat & Bur)
{
	if ((int)Bur.getGrade() > this->getGradeSigned()) throw (Bureaucrat::GradeTooLowException());
	else if (this->_signed == false)
	{
		this->_signed = true;
		std::cout << this->getName() << " Form was signed by " << Bur.getName() << std::endl;
	}
	else
		std::cout << this->getName() << " Form was already signed" << std::endl;
}

void AForm::execute(const Bureaucrat & executor) const
{
	if (this->_signed == false)
		throw NotSignedException();
	if((int)executor.getGrade() > this->getGradeExec())
		throw Bureaucrat::GradeTooLowException();

}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Form Grade is too high.");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Form Grade is too low.");
}

const char *AForm::NotSignedException::what() const throw()
{
	return ("Form is not signed.");
}

std::ostream &operator<<(std::ostream & o, const AForm & a)
{
	o << a.getName() << " form, grade required to sign: " << a.getGradeSigned() << ", grade required to execute: " << a.getGradeExec() << ", is signed: " << a.getSigned();
	return (o);
}
