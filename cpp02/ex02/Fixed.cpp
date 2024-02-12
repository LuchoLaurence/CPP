/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 10:31:55 by llaurenc          #+#    #+#             */
/*   Updated: 2024/02/12 09:22:44 by llaurenc         ###   ########.fr       */
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




bool Fixed::operator<(Fixed const & other) const {
	return (this->_FixedValue < other.getRawBits());
}

bool Fixed::operator>(Fixed const & other) const {
	return (this->_FixedValue > other.getRawBits());
}

bool Fixed::operator>=(Fixed const & other) const {
	return (this->_FixedValue >= other.getRawBits());
}

bool Fixed::operator<=(Fixed const & other) const {
	return (this->_FixedValue <= other.getRawBits());
}

bool Fixed::operator==(Fixed const & other) const {
	return (this->_FixedValue == other.getRawBits());
}

bool Fixed::operator!=(Fixed const & other) const {
	return (this->_FixedValue != other.getRawBits());
}

Fixed	Fixed::operator+(Fixed const & other) const {
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed	Fixed::operator-(Fixed const & other) const {
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed	Fixed::operator*(Fixed const & other) const {
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed	Fixed::operator/(Fixed const & other) const {
		if (other.getRawBits() == 0)
			throw std::runtime_error("Division by 0 impossible");
	return Fixed(this->toFloat() / other.toFloat());
}

Fixed&   Fixed::operator++( void ) {
    ++this->_FixedValue;
    return *this;
}

Fixed   Fixed::operator++( int ) {
    Fixed tmp( *this );
    tmp._FixedValue = this->_FixedValue++;
    return tmp;
}

Fixed& Fixed::operator--( void ) {
    --this->_FixedValue;
    return *this;
}

Fixed Fixed::operator--( int ) {
    Fixed tmp( *this );
    tmp._FixedValue = this->_FixedValue--;
    return tmp;
}

Fixed & Fixed::min(Fixed & a, Fixed & b) {
	if (a < b)
		return a;
	else 
		return b;
}

Fixed const & Fixed::min(Fixed const & a, Fixed const & b) {
	if (a < b)
		return a;
	else 
		return b;
}

Fixed & Fixed::max(Fixed & a, Fixed & b) {
	if (a > b)
		return a;
	else 
		return b;
}

Fixed const & Fixed::max(Fixed const & a, Fixed const & b) {
	if (a > b)
		return a;
	else 
		return b;
}
std::ostream &	operator<<( std::ostream & o, Fixed const & rhs) {
	o << rhs.toFloat();
	return (o);
}