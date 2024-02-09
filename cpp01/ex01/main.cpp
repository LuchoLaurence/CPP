/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:40:29 by llaurenc          #+#    #+#             */
/*   Updated: 2024/01/24 15:40:29 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){
	Zombie	*horde = zombieHorde(5, "Soheil");
	Zombie	*horde2 = zombieHorde(1, "Luc");
	Zombie	*horde3 = zombieHorde(3, "Fabricio");

	for (int i = 0; i < 5; ++i)
	{
		horde[i].announce();
	}
	for (int i = 0; i < 1; ++i)
	{
		horde2[i].announce();
	}
	for (int i = 0; i < 3; ++i)
	{
		horde3[i].announce();
	}
	

   	delete [] horde;
	delete [] horde2;
	delete [] horde3;
    return 0;
}