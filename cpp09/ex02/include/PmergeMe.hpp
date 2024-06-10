/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 14:26:00 by llaurenc          #+#    #+#             */
/*   Updated: 2024/06/03 14:26:00 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <iterator>
#include <iostream>
#include <list>
#include <cstdlib>
#include <climits>
#include <vector>

template<typename Container>
class PmergeMe
{
private:
	Container array;
public:
	PmergeMe();
	~PmergeMe();
	PmergeMe(PmergeMe const & cpy);
	PmergeMe &operator=(PmergeMe const & other);

	void Init(char *argv[]);
	bool isCorrect(char *str);
	void fordJohnsonSort(Container & array);
	void merge(Container & left, Container & right, Container & res);
};
