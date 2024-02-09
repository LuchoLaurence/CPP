/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 06:04:51 by llaurenc          #+#    #+#             */
/*   Updated: 2024/02/05 06:04:51 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _integer( 0 ) {
	return;
}

Fixed::~Fixed() {
	return;
}

Fixed::Fixed(Fixed const & cpy) {
	*this = cpy;
	return;
}

Fixed&	Fixed::operator=(Fixed const & rhs) {
	this->_integer = rhs.getInteger();
	return (*this);
}



