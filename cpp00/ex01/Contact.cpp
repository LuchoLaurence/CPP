/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:44:22 by llaurenc          #+#    #+#             */
/*   Updated: 2024/01/25 10:44:22 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include <stdexcept>
#include <iostream>
#include <limits>
#include <cstring>

#include "Contact.hpp"

Contact::Contact( void ) {
    return;
}

Contact::~Contact( void ) {
    return;
}

void	Contact::CreateContact( void ) {

    std::cout << "Enter the first name" << std::endl;
	std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
    std::getline(std::cin, this->_fname);
	while (this->GoodSaisie(this->_fname) == false)
	{
		std::cout << "Invalid input. Enter letters only." << std::endl;
   		std::cout << "Enter the first name" << std::endl;
		std::getline(std::cin, this->_fname);
	}

    std::cout << "Enter the last name" << std::endl;
    std::getline(std::cin, this->_lname);
	while (this->GoodSaisie(this->_lname) == false)
	{
		std::cout << "Invalid input. Enter letters only." << std::endl;
   		std::cout << "Enter the last name" << std::endl;
		std::getline(std::cin, this->_lname);
	}

    std::cout << "Enter the nick name" << std::endl;
    std::getline(std::cin, this->_nname);
	while (this->GoodSaisieSpace(this->_nname) == false)
	{
		std::cout << "Invalid input. Enter numbers or letters." << std::endl;
   		std::cout << "Enter the nick name" << std::endl;
		std::getline(std::cin, this->_nname);
	}

    std::cout << "Enter the number" << std::endl;
    std::getline(std::cin, this->_number);
	while (this->GoodSaisieD(this->_number) == false)
	{
		std::cout << "Invalid input. Enter numbers" << std::endl;
   		std::cout << "Enter the number" << std::endl;
		std::getline(std::cin, this->_number);
	}

	std::cout << "Enter the darkest secret" << std::endl;
    std::getline(std::cin, this->_secret);
	while (this->GoodSaisieSpace(this->_secret) == false)
	{
		std::cout << "Invalid input. Enter numbers or letters." << std::endl;
   		std::cout << "Enter the darkest secret" << std::endl;
		std::getline(std::cin, this->_secret);
	}
    return; 
}

// Vérifier si la saisie contient uniquement des chiffres ou des lettres
bool    Contact::GoodSaisie (std::string input) const {
    bool isValid = true;
	if (input.empty())
		isValid = false;
    for (char c : input) {
        if (!std::isalpha(c)) {
            isValid = false;
            break;
        }
    }
	return (isValid);
}

bool    Contact::GoodSaisieD (std::string input) const {
    bool isValid = true;
	if (input.empty())
		isValid = false;
    for (char c : input) {
        if (!std::isdigit(c)) {
            isValid = false;
            break;
        }
    }
	return (isValid);
}

bool    Contact::GoodSaisieSpace (std::string input) const {
    bool isValid = true;
	if (input.empty())
		isValid = false;
    for (char c : input) {
        if (!std::isalnum(c) && c != ' ') {
            isValid = false;
            break;
        }
    }
	return (isValid);
}

void	Contact::PrintContact ( void ) const {
	std::cout << "First name is : " << this->_fname << std::endl;
	std::cout << "Last name is : " << this->_lname << std::endl;
	std::cout << "Nickname is : " << this->_nname << std::endl;
	std::cout << "Number is : " << this->_number << std::endl;
	std::cout << "Darkest secret is : " << this->_secret << std::endl;
    return; 
}

void	Contact::PrintLine( int index ) const {

	std::cout << "         "  << index << "|";
	PrintLineBis(this->_fname);
	std::cout << "|";
	PrintLineBis(this->_lname);
	std::cout << "|";
	PrintLineBis(this->_nname);
	std::cout << std::endl;
	return ;
}

void	Contact::PrintLineBis( std::string txt ) const {
	int size = txt.size();
	std::string	prov;
	prov = txt;
	if (size > 10) {
		prov.erase(10);
		prov[9] = '.';
	} else 
	{
		for (size; size < 10; size++)
			prov = " " + prov;
	}
	std::cout << prov;
	
	return;
}