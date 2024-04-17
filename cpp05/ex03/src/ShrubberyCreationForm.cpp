/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:21:30 by llaurenc          #+#    #+#             */
/*   Updated: 2024/04/17 14:11:58 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : 
	AForm("ShrubberyCreationForm", 145, 137)
{
	this->_target = target;	
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & cpy) :
	AForm(cpy)
{
	this->_target = cpy._target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const & other)
{
	this->setName(other.getName());
	this->setSign(other.getSigned());
	this->setGrade(other.getGradeSigned());
	this->setExecute(other.getGradeExec());
	this->_target = other._target;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	AForm::execute(executor);
	std::ofstream file((this->_target + "_shrubbery").c_str());
	file << "                   ,@@@@@@@," << std::endl;
	file << "       ,,,.       ,@@@@@@/@@,   .oo8888o." << std::endl;
	file << "    ,&%%&%&&%   ,@@@@@/@@@@@@, 8888\\88/8o" << std::endl;
	file << "   ,%&\\%&&%&&%  ,@@@\\@@@/@@@  88\\88888/88'" << std::endl;
	file << "   %&&%&%&/%&&%  @@\\@@/ /@@@  88888\\88888'" << std::endl;
	file << "   %&&%/ %&%%&&   @@\\ V /@@'  `88\\8 `/88'" << std::endl;
	file << "   `&%\\ ` /%&'       |.|        \\ '|8'" << std::endl;
	file << "       |o|           | |           | |" << std::endl;
	file << "       |.|           | |           | |" << std::endl;
	file.close();
}
