/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bureaucrate.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 11:29:30 by llaurenc          #+#    #+#             */
/*   Updated: 2024/04/08 14:52:43 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Header-protection
#pragma once

// includes
#include <string>
#include <iostream>

// classes

class Bureaucrate
{
	private :
		const std::string _name;
		size_t _grade;
	
	public :
		Bureaucrate();
		Bureaucrate(std::string name);
		Bureaucrate(Bureaucrate const & cpy);
		~Bureaucrate();
		Bureaucrate & operator=(Bureaucrate const & other);

		//getter
		std::string getName(void) const;
		size_t getGrade(void) const;

		//members functions
		void	incrementGrade();
		void	decrementGrade();
		
		
}

std::ostream &operator<<(std::ostream & o, Bureaucrate *a);