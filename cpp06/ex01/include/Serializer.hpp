/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 10:39:47 by llaurenc          #+#    #+#             */
/*   Updated: 2024/04/29 12:47:31 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Header-protection
#pragma once

//includes

#include <iostream>
#include <string>
#include <stdint.h>

//classes

struct Data
{
	std::string str;
	std::string str2;
	int			number;
};

class Serializer {
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
	private:
		Serializer();
		~Serializer();
		Serializer(Serializer const & cpy);
		Serializer &operator=(Serializer const & other);
};
