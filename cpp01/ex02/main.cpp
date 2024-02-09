/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:39:54 by llaurenc          #+#    #+#             */
/*   Updated: 2024/01/25 10:39:54 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


int	main( void )
{
	std::string strd = "HI THIS IS BRAIN";
	std::string	*stringPTR = &strd;
	std::string &stringREF = strd;

	std::cout << "The memory address the string variable = " << &strd << std::endl;
	std::cout << "The memory address held by stringPTR   = " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF   = " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "The value of string variable  = " << strd << std::endl;
	std::cout << "The value pointedby stringPTR = " << *stringPTR << std::endl;
	std::cout << "The value pointedby stringREF = " << stringREF << std::endl;


	return 0;

}