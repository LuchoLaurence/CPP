/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:56:33 by llaurenc          #+#    #+#             */
/*   Updated: 2024/05/07 16:56:33 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
# include <exception>
# include <cctype>
# include <map>
#include <algorithm>

class occurenceNotFind : public std::exception
{
	virtual const char* what() const throw()
	{
		return ("Element not found!");
	}
};

template < typename T >
typename T::iterator easyFind(T & c, int & n)
{
	return (std::find(c.begin(), c.end(), n));
}
