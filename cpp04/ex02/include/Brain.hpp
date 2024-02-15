/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 13:47:11 by llaurenc          #+#    #+#             */
/*   Updated: 2024/02/13 13:47:11 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#// Header-protection
#pragma once

// Includes
#include <string>
#include <iostream>

// classes

class Brain
{
	private:
	
	std::string _ideas[100];
	
	public:
	
	Brain();
	~Brain();
	Brain(Brain const & cpy);
	Brain & operator=(Brain const & other);

	std::string getIdea(int i) const;
	void setIdea(int i, std::string idea);

};
