/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:39:24 by llaurenc          #+#    #+#             */
/*   Updated: 2024/02/12 16:39:25 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#// Header-protection
#pragma once

// Includes
#include <string>
#include <iostream>

// classes

class WrongAnimal {

	protected:
	std::string _type;
	public:
	WrongAnimal();
	virtual ~WrongAnimal();
	WrongAnimal(WrongAnimal const & cpy);
	
	WrongAnimal & operator=(WrongAnimal const & other);
	
	void makeSound() const;
	std::string getType() const;
};

