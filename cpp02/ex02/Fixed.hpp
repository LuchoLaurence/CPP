/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 10:31:50 by llaurenc          #+#    #+#             */
/*   Updated: 2024/02/12 09:18:56 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Fixed {
  
private:
		
	int _FixedValue;
	static const int _nbFractionalBits = 8;

public:  

	Fixed();
	Fixed(int const n);
	Fixed(float const f);
	~Fixed();
	Fixed(Fixed const & cpy);

	int getRawBits( void ) const;
	void setRawBits( int const raw );

	float toFloat( void ) const;
	int toInt( void ) const;
  
	Fixed& operator=(Fixed const & other);

	bool operator<(Fixed const & other) const;
	bool operator>(Fixed const & other) const;
	bool operator>=(Fixed const & other) const;
	bool operator<=(Fixed const & other) const;
	bool operator==(Fixed const & other) const;
	bool operator!=(Fixed const & other) const;
	Fixed	operator+(Fixed const & other) const;
	Fixed	operator-(Fixed const & other) const;
	Fixed	operator*(Fixed const & other) const;
	Fixed	operator/(Fixed const & other) const;
	Fixed	operator++( int );
	Fixed & operator++( void );
	Fixed 	operator--( int );
	Fixed & operator--( void );
	static Fixed & min(Fixed & a, Fixed & b);
	static const Fixed & min(Fixed const & a, Fixed const & b);
	static Fixed & max(Fixed & a, Fixed & b);
	static const Fixed & max(Fixed const & a, Fixed const & b);
};

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs);