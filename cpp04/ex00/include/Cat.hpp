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

// classes

class Cat : public Animal {
	
	public:
	Cat();
	Cat(Cat const &cpy);
	Cat &operator=(Cat const &cpy);
	~Cat();

	void makeSound(void) const;
};
