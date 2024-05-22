/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 03:14:18 by llaurenc          #+#    #+#             */
/*   Updated: 2024/05/13 03:14:18 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

class Span {
	private:
		unsigned int _N;
		std::vector<int> _array;

	public :
		Span();
		~Span();
		Span(unsigned int N);
		Span(Span const & cpy);
		Span & operator=(Span const & other);

		//member functions
		void addNumber(int nb);
		int shortestSpan( void ) const;
		int longestSpan( void ) const;
		void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);

		//getter
		unsigned int getN( void ) const;
		std::vector<int> getVector( void ) const;

		class TooManyInt : public std::exception
		{
			virtual const char * what() const throw();
		};

		

		class NotEnoughInt : public std::exception
		{
			virtual const char * what() const throw();
		};

};
