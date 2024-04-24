/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 09:00:29 by llaurenc          #+#    #+#             */
/*   Updated: 2024/04/24 15:08:22 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
		std::cout << "Error: ./convert takes only 1 arg!" << std::endl;
	else
		ScalarConverter::convert(argv[1]);
	return (0);
}
