/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:39:12 by llaurenc          #+#    #+#             */
/*   Updated: 2024/02/12 16:39:13 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("null") {
	std::cout << "Animal Constructor called" << std::endl;
	return;
}

Animal::~Animal() {
	std::cout << "Animal Destructor called" << std::endl;
	return;
}

Animal::Animal(Animal const & cpy) {
	std::cout << "Animal Copy Constructor called" << std::endl;
	*this = cpy;
	return;
}

Animal & Animal::operator=(Animal const & other) {
	if (this == &other)
        return (*this);
	this->_type = other._type;
	return (*this);
}

void Animal::makeSound() const {
	std::cout << "Blop blop blop" << std::endl;
	return;
}

std::string Animal::getType() const {
	return (this->_type);
}
