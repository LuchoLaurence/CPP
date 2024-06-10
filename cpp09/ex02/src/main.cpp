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
#include "PmergeMe.cpp"


int main(int argc, char *argv[])
{
	if (argc <= 1)
		return 0;
	try {
		PmergeMe<std::list<int> > C;
		C.Init(argv);

	}
	catch (const std::exception & bc)
	{
		std::cerr << "Error: " << bc.what() << std::endl;
		return 1;
	}
	return 0;
}
