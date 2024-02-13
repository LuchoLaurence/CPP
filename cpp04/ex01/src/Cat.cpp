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

Cat::Cat() : Animal() {
	std::cout << "Cat constructor called" << std::endl;
	this->_type = "Cat";
	return;
}

Cat::~Cat() {
	std::cout << "Cat Destructor called" << std::endl;
	return;
}

Cat::Cat(Cat const & cpy) : Animal(cpy) {
	std::cout << "Cat Copy constructor called" << std::endl;
	return;
}

Cat & Cat::operator=(Cat const & other) {
	Animal::operator=(other);
	return(*this);
}

void Cat::makeSound(void) const {
	std::cout << "Miaou Miaou" << std::endl;
	return;
}