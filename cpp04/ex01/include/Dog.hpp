/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:39:29 by llaurenc          #+#    #+#             */
/*   Updated: 2024/02/12 16:39:30 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#// Header-protection
#pragma once

// Includes
#include "Animal.hpp"
#include "Brain.hpp"

// classes

class Dog : public Animal {
	private:

	Brain* _brain;
	
	public:
	Dog();
	~Dog();
	Dog(Dog const &cpy);
	Dog &operator=(Dog const &cpy);

	void makeSound(void) const;
};
