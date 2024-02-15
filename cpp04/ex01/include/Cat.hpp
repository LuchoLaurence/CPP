/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:39:26 by llaurenc          #+#    #+#             */
/*   Updated: 2024/02/12 16:39:27 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#// Header-protection
#pragma once

// Includes
#include "Animal.hpp"
#include "Brain.hpp"

// classes

class Cat : public Animal {
	private:

	brain*	_brain;

	public:

	Cat();
	~Cat();
	Cat(Cat const &cpy);
	Cat &operator=(Cat const &cpy);

	void makeSound(void) const;
	void newBrain();
};
