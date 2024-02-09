/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:44:15 by llaurenc          #+#    #+#             */
/*   Updated: 2024/01/25 10:44:15 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include <stdexcept>
#include <iostream>
#include <limits>
#include <cstring>

#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ) : _maxContact(8), _nbContact(0) {
	this->_getInput();
    return ;
}

PhoneBook::~PhoneBook( void ) {

    return ;
}

void	PhoneBook::_getInput( void ) {
	char	buff[512];
	std::string	leave = "EXIT";
	std::string	search = "SEARCH";
	std::string	add = "ADD";

	std::cout << "what you want to do (ADD, SEARCH or EXIT)" << std::endl;
	std::cin >> buff;

	if (leave.compare(std::string(buff)) == 0) {
		std::cout << "Goodbye" << std::endl;
		return;
	}

	else if (add.compare(std::string(buff)) == 0)
		this->_addContact();

	else if (search.compare(std::string(buff)) == 0)
		this->_listContact();

	this->_getInput();
	return ;
}

void	PhoneBook::_addContact( void ) {
	if (this->_nbContact >= this->_maxContact) {
		for (int i= 1; i < this->_nbContact - 1; i++)
		{
			this->_Tab[i-1] = this->_Tab[i];
		}
	}
	else
		this->_nbContact++;
	
	this->_Tab[this->_nbContact - 1].CreateContact();
	return ;
}

void PhoneBook::_listContact ( void ) const {
	if (this->_nbContact == 0)
	{
		std::cout << "You don't have any contacts" << std::endl;
		return;
	}
	std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
	int	i = 1;
	while (i - 1 < this->_nbContact)
	{
		this->_Tab[i - 1].PrintLine(i);
		i++;
	}
	char buffer[512];
	std::cout << "Enter the index of the contact you want to display" << std::endl;
	std::cin >> buffer;
	if (std::strlen(buffer) > 1 || !std::isdigit(buffer[0]))
	{
		std::cout << "Error, this is not a valid index!" << std::endl;
		return ;
	}
	if (std::atoi(buffer) > this->_nbContact || std::atoi(buffer) <= 0)
	{
		std::cout << "Error, this IS IS is not a valid index!" << std::endl;
		return ;
	}
	_Tab[std::atoi(buffer) - 1].PrintContact();

	return ;
}