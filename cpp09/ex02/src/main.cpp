/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 14:25:39 by llaurenc          #+#    #+#             */
/*   Updated: 2024/06/03 14:25:39 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool	isCorrect(char * str)
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

int main(int argc, char *argv[])
{
	if (argc == 0)
		return 0;
	try {
		int i = 1;
		std::list<int> list;
		while (argv[i])
		{
			if (!isCorrect(argv[i])) throw std::runtime_error("Bad args! Positive integers only!");
			else 
				list.push_back(std::atoi(argv[i]));
			i++;
		}
		std::list<int>::iterator it = list.begin();

		while (it != list.end())
		{
			std::cout << *it << " ";
			it++;
		}
		std::pair
		std::cout << "a/b = " << a/b << std::endl;
	}
	catch (const std::exception & bc)
	{
		std::cerr << "Error: " << bc.what() << std::endl;
		return 1;
	}
	return 0;
}
