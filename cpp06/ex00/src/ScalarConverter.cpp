/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 09:11:35 by llaurenc          #+#    #+#             */
/*   Updated: 2024/05/23 10:44:39 by llaurenc         ###   ########.fr       */
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
	if (str.empty())
		return NO_TYPE;
	if (checkInt(str))
		return INT_TYPE;
	if (str.length() == 1 && std::isprint(str[0]))
		return CHAR_TYPE;
	if (str == "-inff" || str == "+inff" || str == "nanf"
	|| str == "-inf" || str == "+inf" || str == "nan")
		return NAN_TYPE;
	if (str[str.length() - 1] == 'f' && checkDecimal(str, 1))
		return FLOAT_TYPE;
	if (checkDecimal(str, 0))
		return DOUBLE_TYPE;
	return NO_TYPE;
}

void	ScalarConverter::printChar(char c){
	if (std::isprint(c))
		std::cout << "char: " << "'" << c << "'" << std::endl;
	else if (c > 127 || c < 0)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
}

void	ScalarConverter::printInt(int i){
	std::cout << "int: " << i << std::endl;
}

void ScalarConverter::printFloat(float f){
	if (f < std::numeric_limits<float>::min() || f > std::numeric_limits<float>::max() )
		std::cout << "float: impossible" << std::endl;
	else
		std::cout << "float: " << std::fixed << std::setprecision(1) <<f << "f" << std::endl;
}

void ScalarConverter::printDouble(double d){
	if (d < std::numeric_limits<double>::min() || d > std::numeric_limits<double>::max())
		std::cout << "double: impossible" << std::endl;
	else
		std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
}

void ScalarConverter::strToChar(const std::string &str)
{
	printChar(str[0]);
	printInt(static_cast<int>(str[0]));
	printFloat(static_cast<float>(str[0]));
	printDouble(static_cast<double>(str[0]));
}

void ScalarConverter::strToInt(const std::string &str)
{
	char *endptr;
	long int lon = std::strtol(str.c_str(), &endptr, 10);
	int	a = static_cast<int>(lon);

	if (lon < 0 || lon > 127)
		std::cout << "char: impossible" << std::endl;
	else 
		printChar(static_cast<char>(a));
	if (lon < std::numeric_limits<int>::min() || lon > std::numeric_limits<int>::max())
		std::cout << "int: impossible" << std::endl;
	else
		printInt(a);
	printFloat(static_cast<float>(a));
	printDouble(static_cast<double>(a));
}
void ScalarConverter::strToFloat(const std::string &str)
{
	double test = std::atof(str.c_str());
	float f = static_cast<float>(test);
	if (f < 0 || f > 127) {
		std::cout << "char: impossible" << std::endl;
	}
	else
		printChar(static_cast<char>(f));
	if (f < std::numeric_limits<int>::min() || f > std::numeric_limits<int>::max())
		std::cout << "int: impossible" << std::endl;
	else
		printInt(static_cast<int>(f));
	if (test < std::numeric_limits<float>::min() || test > std::numeric_limits<float>::max() )
		std::cout << "float: impossible" << std::endl;
	else
		printFloat(f);
	printDouble(static_cast<double>(f));
}
void ScalarConverter::strToDouble(const std::string &str){
	char *endptr;
	double d = std::strtod(str.c_str(), &endptr);
	if (d < 0 || d > 127) {
		std::cout << "char: impossible" << std::endl;
	}
	else
		printChar(static_cast<char>(d));
	if (d < std::numeric_limits<int>::min() || d > std::numeric_limits<int>::max())
		std::cout << "int: impossible" << std::endl;
	else
		printInt(static_cast<int>(d));
	if (d < std::numeric_limits<float>::min() || d > std::numeric_limits<float>::max() )
		std::cout << "float: impossible" << std::endl;
	else
		printFloat(static_cast<float>(d));
	printDouble(d);
	
}

void ScalarConverter::ft_nan(const std::string &str){
	std::cout << "char: impossible" << std:: endl
		<< "int: impossible" << std::endl;
	if (str == "nan" || str == "nanf")
		std::cout << "float: nanf" << std::endl
		<< "double: nan" << std::endl;
	else if (str == "+inf" || str == "+inff")
		std::cout << "float: inff" << std::endl
		<< "double: inf" << std::endl;
	else if (str == "-inf" || str == "-inff")
        std::cout << "float: -inff" << std::endl
		<< "double: -inf" << std::endl;
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
		ft_nan(str);
		break;
	case CHAR_TYPE:
		strToChar(str);
		break;
	case INT_TYPE:
		strToInt(str);
		break;
	case FLOAT_TYPE:
		strToFloat(str);
		break;
	case DOUBLE_TYPE:
		strToDouble(str);
		break;
		
	default:
		break;
	}
	return ;
}
