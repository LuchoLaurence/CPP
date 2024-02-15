/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:11:46 by llaurenc          #+#    #+#             */
/*   Updated: 2024/02/13 12:11:46 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#// Header-protection
#pragma once

// Includes
#include "WrongAnimal.hpp"

// classes

class WrongCat : public WrongAnimal {
	
	public:
	WrongCat();
	~WrongCat();
	WrongCat(WrongCat const & cpy);
	WrongCat &operator=(WrongCat const & cpy);

	void makeSound(void) const;
};

