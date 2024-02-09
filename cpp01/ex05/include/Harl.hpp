/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:34:22 by llaurenc          #+#    #+#             */
/*   Updated: 2024/01/29 14:34:22 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#// Header-protection
#pragma once

// Includes
#include <string>
#include <iostream>

// classes

class Harl
{
	private:
			void	_debug(	void ) const;
			void	_info( void ) const;
			void	_warning( void ) const;
			void	_error( void ) const;
	public:
			Harl();
			~Harl();
			void	complain(std::string level) const;
};