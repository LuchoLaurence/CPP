/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:43:56 by llaurenc          #+#    #+#             */
/*   Updated: 2024/04/17 14:28:11 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>

PresidentialPardonForm::PresidentialPardonForm(std::string target) : 
	AForm("PresidentialPardonForm", 25, 5)
{
	this->_target = target;	
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & cpy) :
	AForm(cpy)
{
	this->_target = cpy._target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const & other)
{
	this->setName(other.getName());
	this->setSign(other.getSigned());
	this->setGrade(other.getGradeSigned());
	this->setExecute(other.getGradeExec());
	this->_target = other._target;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	AForm::execute(executor);
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
