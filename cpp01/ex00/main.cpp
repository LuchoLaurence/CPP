/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:05:18 by llaurenc          #+#    #+#             */
/*   Updated: 2024/01/24 12:05:18 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){
   	Zombie	*bizon = newZombie("Luc");
	bizon->announce();
	randomChump("Soheil");
	delete bizon;
    return 0;
}