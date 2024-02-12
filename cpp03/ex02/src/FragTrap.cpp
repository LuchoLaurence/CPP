/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 14:58:22 by llaurenc          #+#    #+#             */
/*   Updated: 2024/02/12 15:12:07 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "ClapTrap default constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDmg = 30;
	return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "ClapTrap default constructor called with a string parameter" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDmg = 30;
	return;
}

FragTrap::FragTrap(FragTrap const & cpy) : ClapTrap(cpy) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	return;
}

FragTrap::~FragTrap() {
	std::cout << "ClapTrap destructor called" << std::endl;
	return;
}

FragTrap & FragTrap::operator=(FragTrap const & other) {
	ClapTrap::operator=(other);
	return(*this);
}

void	FragTrap::highFivesGuys(void) {
	if (this->_hitPoints == 0)
	{
		std::cout << "FragTrap " << this->_name << " is dead and cannot high five!" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->_name << " high five!" << std::endl;
	return;
}
