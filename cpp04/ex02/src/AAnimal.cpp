/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:39:12 by llaurenc          #+#    #+#             */
/*   Updated: 2024/02/12 16:39:13 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("null") {
	std::cout << "AAnimal Constructor called" << std::endl;
	return;
}

AAnimal::AAnimal(std::string type) : _type(type) {
	std::cout << "AAnimal Constructor with parameter called" << std::endl;
	return;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal Destructor called" << std::endl;
	return;
}

AAnimal::AAnimal(AAnimal const & cpy) {
	std::cout << "AAnimal Copy Constructor called" << std::endl;
	this->_type= cpy._type;
	return;
}

AAnimal & AAnimal::operator=(AAnimal const & other) {
	if (this == &other)
        return (*this);
	this->_type = other._type;
	return (*this);
}

void AAnimal::makeSound() const {
	std::cout << "Blop blop blop" << std::endl;
	return;
}

std::string AAnimal::getType() const {
	return (this->_type);
}
