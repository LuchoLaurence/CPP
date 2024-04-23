/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 09:11:37 by llaurenc          #+#    #+#             */
/*   Updated: 2024/04/23 14:10:26 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Header-protection
#pragma once

// includes
#include <string>
#include <iostream>

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
				
		static int StrToInt(const std::string &str);
		static float StrToFloat(const std::string &str);
		static double StrToDouble(const std::string &str);
		
	public :
		static void convert(const std::string &str);
		
};