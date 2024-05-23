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

#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
	Span sp_long = Span(100000);
    std::vector<int> range(100000, 10);
    range[6666] = 40;
	range[555] = 79;
    sp_long.addNumber(range.begin(), range.end());

	try
    {
    	std::cout << sp_long.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error : " << e.what() <<  std::endl;
    }

    try
    {
        std::cout << sp_long.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error : " << e.what() <<  std::endl;
    }

	return (0);
}
