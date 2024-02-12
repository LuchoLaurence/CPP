/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 10:31:55 by llaurenc          #+#    #+#             */
/*   Updated: 2024/02/07 13:47:08 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _nb(0) {
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed::Fixed ( Fixed& cpy) {
	std::cout << "Copy constructor called" << std::endl;
	this->_nb = (cpy.getRawBits());
	return;
}

Fixed&	Fixed::operator=(Fixed const & other) {
	std::cout << "Copy assignement operator called" << std::endl;
	this->_nb = other.getRawBits();
	return (*this);
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "Function setRawBits called" << std::endl;
	this->_nb = raw;
	return;
}

int		Fixed::getRawBits( void ) const {
	std::cout << "Function getRawBits called" << std::endl;
	return(this->_nb);
}