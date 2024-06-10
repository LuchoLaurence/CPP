/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 09:26:41 by llaurenc          #+#    #+#             */
/*   Updated: 2024/06/05 09:26:59 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template<typename Container>
PmergeMe<Container>::PmergeMe()
{
}

template<typename Container>
PmergeMe<Container>::~PmergeMe()
{
}

template<typename Container>
PmergeMe<Container>::PmergeMe(PmergeMe const & cpy)
{
	this->list = cpy.list;
}

template<typename Container>
PmergeMe<Container> & PmergeMe<Container>::operator=(PmergeMe const & other)
{
	if (this == &other)
		return (*this);
	this->list = other.list;
	return (*this);
}

template<typename Container>
bool	PmergeMe<Container>::isCorrect(char * str)
{
	int i = 0;
	char* endptr;

	std::string stri(str);
	long number = std::strtol(stri.c_str(), &endptr, 10);
	if (number > INT_MAX || number < INT_MIN)
		throw std::runtime_error("An arg exceeds the limits of INT");
	while(str[i])
	{
		if (!std::isdigit(str[i]))
			return false;
		i++;
	}
	return true;
}

template<typename Container>
void PmergeMe<Container>::Init(char *argv[])
{
	int i = 1;
		while (argv[i])
		{
			if (!isCorrect(argv[i])) throw std::runtime_error("Bad args! Positive integers only!");
			else 
				this->array.push_back(std::atoi(argv[i]));
			i++;
		}
		typename Container::iterator it = this->array.begin();

		while (it != this->array.end())
		{
			std::cout << *it << " ";
			it++;
		}
}

template<typename Container>
void PmergeMe<Container>::fordJohnsonSort(Container & array)
{
	if (array.size() <= 1)
		return array;

	//regrouper les paires et déterminer le max a droite et le min a gauche
	Container left, right;
	for (int i = 0; i + 1 < array.size(); i + 2)
	{
		if (array[i] < array[i + 1])
		{
			left.push_back(array[i]);
			right.push_back(array[i + 1]);
		}
		else {
			left.push_back(array[i + 1]);
			right.push_back(array[i]);
		}
		if (array.size() % 2 == 1)
			left.push_back(array[array.size() - 1]);
	}

	//Tri récursif
	fordJohnsonSort(right);


	//Fusion des deux Container
	Container merged_Container;
	merge(left, right, merged_Container);

	array = merged_Container;
	return ;
}

template <typename Container>
void	PmergeMe<Container>::merge(Container & left, COntainer & right, Container & res)
{
	
}