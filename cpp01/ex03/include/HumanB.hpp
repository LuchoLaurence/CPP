/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:54:34 by llaurenc          #+#    #+#             */
/*   Updated: 2024/01/25 10:54:34 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Header-protection
#pragma once

// Includes
#include <string>
#include <iostream>
#include "Weapon.hpp"

// classes
class HumanB
{
	public:
			HumanB(std::string name);
			~HumanB( void );
			void setWeapon(Weapon &weap);
			void attack( void );

	private:
			std::string _name;
			Weapon	*_weapon;

};