/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:03:17 by llaurenc          #+#    #+#             */
/*   Updated: 2024/02/12 15:16:38 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default"), _hitPoints(10), _energyPoints(10), _attackDmg(0) {
	std::cout << "Construtor called" << std::endl;
	return;
}

ClapTrap::ClapTrap (std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDmg(0) {
	std::cout << "Construtor called with string parameter" << std::endl;
	return;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destrutor called" << std::endl;
	return;
}

ClapTrap::ClapTrap (ClapTrap const & cpy) {
	std::cout << "Copy Construtor called" << std::endl;
	*this = cpy;
	return;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & other){
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDmg = other._attackDmg;
	return (*this);
}

void	ClapTrap::attack(const std::string& target) {
	if (this->_energyPoints < 1)
	{
		std::cout << "ClapTrap " << this->_name << " is out of energy!" << std::endl;
        return;
	}
	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead! He can't attack" << std::endl;
        return;
	}
	
	std::cout << "ClapTrap "<< this->_name << " attacks "<< target <<", causing "<< this->_attackDmg << " points of damage!" <<std::endl;
	this->_energyPoints -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints > amount)
		this->_hitPoints -= amount;
	else if (this->_hitPoints > 0){
		this->_hitPoints = 0;
	}
	else 
	{
		std::cout << "\033[33mClapTrap " << this->_name << " is already dead, stop beating it.\033[0m" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " damage! Now he has " << this->_hitPoints << " hit Points" << std::endl;
	return;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead! He cant se reparer" << std::endl;
        return;
	}
	if (this->_energyPoints < 1)
	{
		std::cout << "ClapTrap " << this->_name << " is out of energy!" << std::endl;
        return;
	}
	std::cout << "Claptrap " << this->_name << " repairs itself for " << amount << " hits points!" << std::endl;
	this->_hitPoints += amount;
	this->_energyPoints -= 1;
	return;
}
