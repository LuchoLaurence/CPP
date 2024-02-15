/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 13:46:35 by llaurenc          #+#    #+#             */
/*   Updated: 2024/02/13 13:46:35 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
    std::cout << "Brain constructor called" << std::endl;
    return;
}

// Destructor
Brain::~Brain(void) {
    std::cout << "Brain destructor called" << std::endl;
    return;
}

Brain::Brain(Brain const & cpy) {
	std::cout << "Brain copy constructor called" << std::endl;
	*this = cpy;
}

Brain & Brain::operator=(Brain const & other) {
	if (this == &other)
		return (*this);
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = other._ideas[i];
	return (*this);
}

std::string Brain::getIdea(int i) const {
	if (i < 0 || i > 99)
		return ("");
	return (this->_ideas[i]);
}

void	Brain::setIdea(int i, std::string idea) {
	if (i < 0 || i > 99)
		return;
	this->_ideas[i] = idea;
	return;
}
