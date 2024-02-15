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

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("null") {
	std::cout << "WrongAnimal Constructor called" << std::endl;
	return;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal Destructor called" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(WrongAnimal const & cpy) {
	std::cout << "WrongAnimal Copy Constructor called" << std::endl;
	*this = cpy;
	return;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & other) {
	if (this == &other)
        return (*this);
	this->_type = other._type;
	return (*this);
}

void WrongAnimal::makeSound() const {
	std::cout << "Bzz Bzz" << std::endl;
	return;
}

std::string WrongAnimal::getType() const {
	return (this->_type);
}
