/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 09:11:35 by llaurenc          #+#    #+#             */
/*   Updated: 2024/04/23 14:44:18 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter::ScalarConverter(ScalarConverter const & cpy)
{
	*this = cpy;
}

ScalarConverter & ScalarConverter::operator=(ScalarConverter const & other)
{
	if (this == &other)
        return (*this);
	return (*this);
}

bool ScalarConverter::checkInt(const std::string &str)
{
	size_t start = 0;
	if (str[0] == '+' || str[0] == '-')
		start = 1;
	for(size_t i = start; i < str.length(); i++)
	{
		if(!std::isdigit(str[i]))
			return false;
	}
	return true;
}

bool ScalarConverter::checkDecimal(const std::string &str, int end)
{
	size_t start = 0;
	size_t count = 0;
	size_t pos = 0;
	
	if (str[0] == '+' || str[0] == '-')
		start = 1;
	for (size_t i = start; i < str.length() - end; i++)
	{
		if (str[i] == '.')
		{
			count ++;
			pos = i;
		}
		else if (!std::isdigit(str[i]))
			return false;
	}
	if (count > 1)
		return false;
	if (count == 0 && end == 0)
		return false;
	if (count == 1 && pos == str.length() - 1 - end)
		return false;
	return true;
}

Strtype ScalarConverter::CheckType(const std::string &str)
{
	if (str.empty());
		return NO_TYPE;
	if (str.length() == 1 && std::isalpha(str[0]))
		return CHAR_TYPE;
	if (str == "-inff" || str == "+inff" || str == "nanf"
	|| str == "-inf" || str == "+inf" || str == "nan")
		return NAN_TYPE;
	if (checkInt(str))
		return INT_TYPE;
	if (str[str.length() - 1] == 'f' && checkDecimal(str, 1))
		return FLOAT_TYPE;
	if (checkDecimal(str, 0))
		return DOUBLE_TYPE;
	return NO_TYPE;
}

void ScalarConverter::convert(const std::string &str)
{
	Strtype type = CheckType(str);
	
	switch (type)
	{
	case NO_TYPE:
		std::cout << "char: impossible" << std::endl << "int: impossible"
			<< std::endl << "float: impossible" << std::endl << "double: impossible" << std::endl;
		break;
	case NAN_TYPE:
		
		break;
	case CHAR_TYPE:

		break;
	case INT_TYPE:

		break;
	case FLOAT_TYPE:

		break;
	case DOUBLE_TYPE:
		break;
		
	default:
		break;
	}
	return ;
}

void Scalar