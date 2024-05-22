/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 11:44:54 by llaurenc          #+#    #+#             */
/*   Updated: 2024/05/08 11:44:54 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>


int main()
{
	std::vector<int> vec;
	vec.push_back(1);
    vec.push_back(5);
    vec.push_back(8);
    vec.push_back(56);
    vec.push_back(87);
	try 
	{
		int n = 8;
		std::vector<int>::iterator it = easyFind(vec, n);
		if (it == vec.end())
			throw occurenceNotFind();
		std::cout << "La valeur trouvée est : " << *it << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try 
	{
		int n = 3;
		std::vector<int>::iterator it = easyFind(vec, n);
		if (it == vec.end())
			throw occurenceNotFind();
		std::cout << "La valeur trouvée est : " << *it << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	int elementsToAdd[] = {4, 18, 9, 32, 45, 7};
}