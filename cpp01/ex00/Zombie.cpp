/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:05:10 by llaurenc          #+#    #+#             */
/*   Updated: 2024/01/24 12:05:10 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name) : _name(name) {
    return;
}

Zombie::~Zombie( void ) {
    std::cout << this->_name << " is dead." << std::endl;
    return;
}

void	Zombie::annouce() const {
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}