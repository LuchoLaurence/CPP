/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 10:31:50 by llaurenc          #+#    #+#             */
/*   Updated: 2024/02/07 16:00:34 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed {
  
private:
		
	int _nb;
	static const int _nbFractionalBits = 8;

public:  

	Fixed();
	~Fixed();
	Fixed(Fixed& cpy);

	int getRawBits( void ) const;
	void setRawBits( int const raw );
  
	Fixed& operator=(Fixed const & other);
};