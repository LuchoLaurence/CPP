/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:54:24 by llaurenc          #+#    #+#             */
/*   Updated: 2024/01/25 10:54:24 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Header-protection
#pragma once

// Includes
#include <string>
#include <iostream>

// classes
class Weapon 
{
	public:
			Weapon(const std::string type);
			~Weapon( void );

			std::string const &getType( void ) const;
			void setType(std::string const weap);

	private:
			std::string	_type;
};

