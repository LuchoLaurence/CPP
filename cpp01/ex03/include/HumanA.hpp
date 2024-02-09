/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:54:38 by llaurenc          #+#    #+#             */
/*   Updated: 2024/01/25 10:54:38 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Header-protection
#pragma once

// Includes
#include <string>
#include <iostream>
#include "Weapon.hpp"

// classes
class HumanA
{
	public:
			HumanA(std::string name, Weapon &weap);
			~HumanA( void );
			void	attack( void );

	private:
			std::string _name;
			Weapon	&_weapon;

};