/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 10:31:50 by llaurenc          #+#    #+#             */
/*   Updated: 2024/02/08 13:14:02 by llaurenc         ###   ########.fr       */
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
};

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs);