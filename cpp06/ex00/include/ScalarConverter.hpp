/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 09:11:37 by llaurenc          #+#    #+#             */
/*   Updated: 2024/04/24 15:11:41 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Header-protection
#pragma once

// includes
#include <iostream>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <cctype>
#include <cstdio>
#include <cstdlib>
#include <limits>
//classes

enum Strtype
{
	NO_TYPE,
	CHAR_TYPE,
	INT_TYPE,
	FLOAT_TYPE,
	DOUBLE_TYPE,
	NAN_TYPE
};

class ScalarConverter {
	private :
		ScalarConverter();
		ScalarConverter(ScalarConverter const & cpy);
		~ScalarConverter();
		ScalarConverter & operator=(ScalarConverter const & other);

		static bool checkInt(const std::string &str);
		static bool checkDecimal(const std::string &str, int end);
		static Strtype CheckType(const std::string &str);
				
		static void strToInt(const std::string &str);
		static void strToFloat(const std::string &str);
		static void strToDouble(const std::string &str);
		static void strToChar(const std::string &str);

		static void printChar(char c);
		static void printInt(int i);
		static void printFloat(float f);
		static void printDouble(double d);

		static void	ft_nan(const std::string &str);
		
	public :
		static void convert(const std::string &str);
		
};
