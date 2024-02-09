/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:54:45 by llaurenc          #+#    #+#             */
/*   Updated: 2024/01/25 10:54:45 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string type) : _type(type) {
	return;
}

Weapon::~Weapon( void ) {
	return;
}

std::string const &Weapon::getType( void ) const {
	return (this->_type);
}

void Weapon::setType(std::string const weap) {
	this->_type = weap;
	return ;
}

