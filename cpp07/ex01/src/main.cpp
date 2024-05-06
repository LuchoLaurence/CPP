/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 11:52:40 by llaurenc          #+#    #+#             */
/*   Updated: 2024/05/02 14:39:57 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


int main() {
    // Exemple d'utilisation de la fonction iter avec un tableau d'entiers
    int intArray[] = {1, 2, 3, 4, 5};
    iter(intArray, 5, print<int>);
    std::cout << std::endl;

    // Exemple d'utilisation de la fonction iter avec un tableau de caractères
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};
    iter(charArray, 5, print<char>);
    std::cout << std::endl;

    return 0;
}
