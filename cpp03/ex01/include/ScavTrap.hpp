/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:43:38 by llaurenc          #+#    #+#             */
/*   Updated: 2024/02/12 14:17:41 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#// Header-protection
#pragma once

// Includes
#include <string>
#include <iostream>
#include "ClapTrap.hpp"

// classes

class ScavTrap : public ClapTrap {
	
	public :
	
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & cpy);
		~ScavTrap();
		ScavTrap & operator=(ScavTrap const & other);

		void guardGate();
		
};
