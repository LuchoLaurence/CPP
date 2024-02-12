/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:04:15 by llaurenc          #+#    #+#             */
/*   Updated: 2024/02/12 14:52:52 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ScavTrap	one("one");
	ScavTrap	two("two");
	ScavTrap	defaultTrap;

	one.guardGate(); // guard gate
	one.attack("two"); // attack
	two.takeDamage(10); // take damage
	two.attack("one"); // attack
	one.takeDamage(10); // take damage
	one.attack("default"); // attack
	defaultTrap.takeDamage(10); // take damage
	one.takeDamage(50); // take damage
	one.beRepaired(20); // be repaired
	one.takeDamage(50); // take damage
	one.takeDamage(10); // take damage and die
	one.takeDamage(10); // is dead and cannot take damage
	one.beRepaired(10); // is dead and cannot be repaired
	one.attack("two"); // is dead and cannot attack
	for (int i = 0; i < 47; i++)
		two.attack("one"); // attack 7 times
	two.beRepaired(10); // be repaired
	two.attack("one"); // attack
	two.attack("one"); // no energy points left
	two.beRepaired(10); // no energy points left
	two.guardGate(); // guard gate
	two.takeDamage(100); // take damage and die
	two.takeDamage(10); // is dead and cannot take damage
	two.beRepaired(10); // is dead and cannot be repaired
	two.attack("one"); // is dead and cannot attack
	two.guardGate(); // is dead and cannot guard gate
}
