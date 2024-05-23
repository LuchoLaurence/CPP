/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 11:52:48 by llaurenc          #+#    #+#             */
/*   Updated: 2024/05/02 14:21:13 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template< typename T, typename F>
void iter(T* array, size_t length, F fonc){
	for (size_t i = 0; i < length; ++i)
	{
		//std::cout << "i = ";
		fonc(array[i]);
	}
}

template<typename T>
void print(T & value) {
    std::cout << value << " " << std::endl;
	return ;
}
