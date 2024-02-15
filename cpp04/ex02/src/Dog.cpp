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

Dog::Dog() : AAnimal() {
	std::cout << "Dog constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
	return;
}

Dog::~Dog() {
	std::cout << "Dog Destructor called" << std::endl;
	delete this->_brain;
	return;
}

Dog::Dog(Dog const & cpy) : AAnimal(cpy._type) {
	std::cout << "Dog Copy constructor called" << std::endl;
	this->_brain = new Brain(*cpy._brain);
	return;
}

Dog & Dog::operator=(Dog const & other) {
	if (this != &other) {
		AAnimal::operator=(other);
		delete this->_brain;
		this->_brain = new Brain(*other._brain);
	}
	return(*this);
}

void Dog::makeSound(void) const {
	std::cout << "Wouf Wouf" << std::endl;
	return;
}
