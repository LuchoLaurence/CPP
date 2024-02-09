/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 06:04:56 by llaurenc          #+#    #+#             */
/*   Updated: 2024/02/05 06:04:56 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#// Header-protection
#pragma once

// Includes
#include <string>
#include <iostream>

// classes

class Fixed {
	private :
			int	_integer;
			static const int _nbBits;
	public 	:
			Fixed(int nb);
			Fixed( Fixed const & cpy);
			~Fixed();
			Fixed& operator=( Fixed const & rhs);

};