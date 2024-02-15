/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
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

class AAnimal {

	protected:
	std::string _type;
	public:
	AAnimal();
	AAnimal(std::string type);
	virtual ~AAnimal();
	AAnimal(AAnimal const & cpy);
	
	AAnimal & operator=(AAnimal const & other);
	
	virtual void makeSound() const;
	std::string getType() const;
};

