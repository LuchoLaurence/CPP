/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:39:14 by llaurenc          #+#    #+#             */
/*   Updated: 2024/02/12 16:39:15 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal(){
	std::cout << "Cat Default constructor called" << std::endl;
	_type = "Cat";
}

Cat::Cat(const Cat & cpy) : Animal(cpy){
	std::cout << "Cat Copy constructor called" << std::endl;
}

Cat & Cat::operator=(const Cat & rhs){
	Animal::operator=(rhs);
	return (*this);
}

Cat::~Cat(){
	std::cout << "Destructor of Cat is called" << std::endl;
	return ;
}

void	Cat::makeSound(void) const{
	std::cout << "MIAOUUUU" << std::endl;
	return ;
}
