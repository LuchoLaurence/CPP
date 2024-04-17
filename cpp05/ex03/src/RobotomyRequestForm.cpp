/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:42:43 by llaurenc          #+#    #+#             */
/*   Updated: 2024/04/17 14:09:36 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>
#include <stdlib.h>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : 
	AForm("RobotomyRequestForm", 72, 45)
{
	this->_target = target;	
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & cpy) :
	AForm(cpy)
{
	this->_target = cpy._target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const & other)
{
	this->setName(other.getName());
	this->setSign(other.getSigned());
	this->setGrade(other.getGradeSigned());
	this->setExecute(other.getGradeExec());
	this->_target = other._target;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	AForm::execute(executor);
	std::cout << "RobotomyRequestForm: Making some driling noise..." << std::endl;
	if (rand() % 2)
		std::cout << "RobotomyRequestForm: " << this->_target << " robotomization SUCCESSFULL!" << std::endl;
	else
		std::cout << "RobotomyRequestForm: " << this->_target << " robotomization FAILED!" << std::endl;
	
}
