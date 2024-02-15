/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:11:49 by llaurenc          #+#    #+#             */
/*   Updated: 2024/02/13 12:11:49 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	std::cout << "WrongCat constructor called" << std::endl;
	this->_type = "WrongCat";
	return;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat Destructor called" << std::endl;
	return;
}

WrongCat::WrongCat(WrongCat const & cpy) : WrongAnimal(cpy) {
	std::cout << "WrongCat Copy constructor called" << std::endl;
	return;
}

WrongCat & WrongCat::operator=(WrongCat const & other) {
	WrongAnimal::operator=(other);
	return(*this);
}

void WrongCat::makeSound(void) const {
	std::cout << "Miaou Miaou" << std::endl;
	return;
}
