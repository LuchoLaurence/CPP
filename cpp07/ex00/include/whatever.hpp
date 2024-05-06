/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 11:52:48 by llaurenc          #+#    #+#             */
/*   Updated: 2024/05/02 12:02:11 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template< typename T >
void swap( T & x, T & y) 
{
	T temp;
	temp = x;
	x = y;
	y = temp;
}

template< typename T >
T	min ( T & x, T & y)
{
	if ( x < y)
		return x;
	else 
		return y;
}

template< typename T >
T	max ( T & x, T & y)
{
	if ( x > y)
		return x;
	else 
		return y;
}
