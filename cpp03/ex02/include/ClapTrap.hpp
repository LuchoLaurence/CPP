/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:03:14 by llaurenc          #+#    #+#             */
/*   Updated: 2024/02/12 14:15:41 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#// Header-protection
#pragma once

// Includes
#include <string>
#include <iostream>

// classes

class ClapTrap {
	protected :

	std::string	_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDmg;
	
	public :
	
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	
	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap(ClapTrap const & cpy);
	ClapTrap & operator=(ClapTrap const & other);

};
