/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:55:32 by llaurenc          #+#    #+#             */
/*   Updated: 2024/05/14 16:55:32 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <iterator>
#include <iostream>
#include <list>

template <typename T>
class MutantStack : public std::stack<T> {
public:
    // Alias pour les types d'itérateurs
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    
    // Constructeur par défaut
    MutantStack() : std::stack<T>() {}

    // Constructeur avec initialisation
    MutantStack(const std::stack<T>& other) : std::stack<T>(other) {}

    // Itérateurs
    iterator begin() { return std::stack<T>::c.begin(); }
    iterator end() { return std::stack<T>::c.end(); }
    // const_iterator begin() const { return std::stack<T>::c.begin(); }
    // const_iterator end() const { return std::stack<T>::c.end(); }
};