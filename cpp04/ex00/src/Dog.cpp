/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:39:17 by llaurenc          #+#    #+#             */
/*   Updated: 2024/02/12 16:39:18 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
	std::cout << "Dog constructor called" << std::endl;
	this->_type = "Dog";
	return;
}

Dog::~Dog() {
	std::cout << "Dog Destructor called" << std::endl;
	return;
}

Dog::Dog(Dog const & cpy) : Animal(cpy) {
	std::cout << "Dog Copy constructor called" << std::endl;
	return;
}

Dog & Dog::operator=(Dog const & other) {
	Animal::operator=(other);
	return(*this);
}

void Dog::makeSound(void) const {
	std::cout << "Wouf Wouf" << std::endl;
	return;
}
