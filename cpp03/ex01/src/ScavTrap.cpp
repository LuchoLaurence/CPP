/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:43:53 by llaurenc          #+#    #+#             */
/*   Updated: 2024/02/12 14:48:41 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "ScavTrap Constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDmg = 20;
	return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap Constructor called with a string parameter" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDmg = 20;
	return;
}

ScavTrap::ScavTrap(ScavTrap const & cpy) : ClapTrap(cpy) {
	std::cout << "ScavTrap copy Constructor called" << std::endl;
	return;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructor called" << std::endl;
	return;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & other) {
	ClapTrap::operator=(other);
	return (*this);
}

void	ScavTrap::guardGate() {	
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
	return;
}
