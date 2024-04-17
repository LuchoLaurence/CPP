/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:43:28 by llaurenc          #+#    #+#             */
/*   Updated: 2024/04/15 13:56:42 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("default"), _grade(150)
{
	std::cout << "Bureaucrat Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, size_t grade) : _name(name), _grade(grade)
{
	if (this->getGrade() < 1) throw GradeTooHighException();
	if (this->getGrade() > 150) throw GradeTooLowException();

	std::cout << "Bureaucrat constructor with parameter called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & cpy) : _name(cpy.getName()), _grade(cpy.getGrade())
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = cpy;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called called" << std::endl;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & other)
{
	if (this == &other)
        return (*this);
	this->_grade = other.getGrade();
	return (*this);
}

std::string Bureaucrat::getName(void) const 
{
	return (this->_name);
}

size_t Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void Bureaucrat::incrementGrade()
{
	if (this->_grade == 1) throw GradeTooHighException();
	this->_grade -= 1;
}

void Bureaucrat::decrementGrade()
{
	if (this->_grade == 150) throw GradeTooLowException();
	this->_grade += 1;
}

void Bureaucrat::signForm(AForm & formu)
{	try 
	{
		formu.beSigned(*this);
		std::cout << this->getName() << " signed " << formu.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->getName() << " couldn't sign " << formu.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const & form)
{
	try {
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << this->getName() << " couldn't executed " << form.getName() << " because of " << e.what() << std::endl;
	}

}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return("grade is too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return("grade is too low");
}

std::ostream &operator<<(std::ostream & o, const Bureaucrat & a)
{
	o << a.getName() << ", bureaucrat grade " << a.getGrade();
	return (o);
}
