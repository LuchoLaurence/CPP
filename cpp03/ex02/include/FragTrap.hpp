/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 14:59:13 by llaurenc          #+#    #+#             */
/*   Updated: 2024/02/12 15:12:28 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#// Header-protection
#pragma once

// Includes
#include <string>
#include <iostream>
#include "ClapTrap.hpp"

// classes

class FragTrap : public ClapTrap {
	public :
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const & cpy);
		~FragTrap();
		FragTrap & operator=(FragTrap const & other);

		void highFivesGuys(void);

};
