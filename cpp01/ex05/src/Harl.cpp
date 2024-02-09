/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:54:32 by llaurenc          #+#    #+#             */
/*   Updated: 2024/01/29 14:54:32 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ){
	return;
}

Harl::~Harl( void ){
	return;
}

void	Harl::_debug( void ) const{
	std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
	return;
}

void	Harl::_info( void ) const{
	std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	return;
}

void	Harl::_warning( void ) const{
	        std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	return;
}

void	Harl::_error( void ) const{
	std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
	return;
}

void	Harl::complain(std::string level) const{
	void	(Harl::*ptr_Complain[4])(void) const = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	std::string TabLevel[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i<4; i++)
	{
		if (TabLevel[i] == level)
		{
			(this->*ptr_Complain[i])();
			break;
		}
	}
	return;
}