/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 03:14:21 by llaurenc          #+#    #+#             */
/*   Updated: 2024/05/13 03:14:21 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {}

Span::~Span() {}

Span::Span(unsigned int N) : _N(N) {}

Span::Span(Span const & cpy) {
	this->_N = cpy.getN();
	this->_array = cpy.getVector();
}

Span & Span::operator=(Span const & other)
{
	if (this == &other)
        return (*this);
	this->_N = other.getN();
	this->_array = other.getVector();
	return (*this);
}

void Span::addNumber(int nb)
{
	if (this->_array.size() < this->_N)
		this->_array.push_back(nb);
	else
		throw TooManyInt();
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (this->_array.size() + std::distance(begin, end) > this->_N)
		throw  TooManyInt();
	else
		this->_array.insert(this->_array.end(), begin, end);
}

int Span::shortestSpan( void ) const
{
	if (this->_array.size() < 2)
		throw NotEnoughInt();
	std::vector<int> sortedVec = this->_array;
	std::sort(sortedVec.begin(), sortedVec.end());

	int miniDiff = std::numeric_limits<int>::max();
	int diff;

	for (size_t i = 1; i < sortedVec.size(); ++i)
	{
		diff = sortedVec[i] - sortedVec[i - 1];
		if (diff < miniDiff)
			miniDiff = diff;
	}
	return miniDiff;
}

int Span::longestSpan( void ) const
{
	if (this->_array.size() < 2)
		throw NotEnoughInt();

	int max = this->_array[0];
	int min = this->_array[0];
	for (size_t i = 1; i < this->_array.size(); ++i) {
		if (this->_array[i] > max)
			max = this->_array[i];
		if (this->_array[i] < min)
			min = this->_array[i];
	}
	return (max - min);
}

unsigned int Span::getN( void ) const
{
	return (this->_N);
}

std::vector<int> Span::getVector( void ) const
{
	return (this->_array);
}

const char * Span::TooManyInt::what() const throw() {
	return ("too many integers, vector is full!");
}

const char * Span::NotEnoughInt::what() const throw() {
	return ("not enough integers!");
}