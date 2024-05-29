/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 03:05:45 by llaurenc          #+#    #+#             */
/*   Updated: 2024/05/29 03:05:45 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack.hpp>

class RPN {
	public :

	RPN();
	~RPN();
	RPN(RPN const & cpy);
	RPN & operator=(RPN const & other);

	private :
	std::stack<int> stack;
}