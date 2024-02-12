/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 10:31:55 by llaurenc          #+#    #+#             */
/*   Updated: 2024/02/08 13:28:38 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed( void ) : _FixedValue(0) {
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(int const n) : _FixedValue(n << _nbFractionalBits) {
	std::cout << "Int constructor called" << std::endl;
	return;
}

Fixed::Fixed(float const f) : _FixedValue(roundf(f * (1 << _nbFractionalBits))) {
	std::cout << "Float constructor called" << std::endl;
	return;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed::Fixed ( Fixed const & cpy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
	return;
}

Fixed&	Fixed::operator=(Fixed const & other) {
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &other)
		this->_FixedValue = other.getRawBits();
	return (*this);
}

void	Fixed::setRawBits(int const raw) {
	this->_FixedValue = raw;
	return;
}

int		Fixed::getRawBits( void ) const {
	//std::cout << "Function getRawBits called" << std::endl;
	return(this->_FixedValue);
}


float	Fixed::toFloat( void ) const {
	float floatValue = static_cast<float>(this->_FixedValue) / (1 << _nbFractionalBits );
	return (floatValue);
}

int		Fixed::toInt( void ) const {
	int intValue = this->_FixedValue >> _nbFractionalBits;
	return (intValue);
}


std::ostream &	operator<<( std::ostream & o, Fixed const & rhs) {
	o << rhs.toFloat();
	return (o);
}