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

Cat::Cat() : AAnimal() {
	std::cout << "Cat constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
	return;
}

Cat::~Cat() {
	std::cout << "Cat Destructor called" << std::endl;
	delete this->_brain;
	return;
}

Cat::Cat(Cat const & cpy) : AAnimal(cpy._type) {
	std::cout << "Cat Copy constructor called" << std::endl;
	this->_brain = new Brain(*cpy._brain);
	return;
}

Cat & Cat::operator=(Cat const & other) {
	if (this != &other) {
		AAnimal::operator=(other);
		delete this->_brain;
		this->_brain = new Brain(*other._brain);
	}
	return(*this);
}

void Cat::makeSound(void) const {
	std::cout << "Miaou Miaou" << std::endl;
	return;
}
