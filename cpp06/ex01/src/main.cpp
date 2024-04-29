/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 11:11:10 by llaurenc          #+#    #+#             */
/*   Updated: 2024/04/29 13:01:20 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data ptr;
	
	ptr.str = "hello";
	ptr.str2 = "my old friend";
	ptr.number = 5;
	uintptr_t serial;
	Data * deserial;
	
	std::cout << "Value of the pointer of data : " << &ptr << std::endl;
	serial = Serializer::serialize(&ptr);
	deserial = Serializer::deserialize(serial);
	std::cout << "Value of the pointer at the end :" << deserial << std::endl;

	std::cout << "Value at the beginning : " << ptr.str << " " << ptr.str2 << " " << ptr.number << std::endl;
	std::cout << "Value pointed by the pointer at the end : " << deserial->str << " " << deserial->str2 << " " << deserial->number << std::endl;
	return 0;
}
