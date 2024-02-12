/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:04:15 by llaurenc          #+#    #+#             */
/*   Updated: 2024/02/12 15:14:37 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	FragTrap	one("one");
	FragTrap	two("two");
	FragTrap	defaultTrap;

	one.highFivesGuys(); // high five
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
	for (int i = 0; i < 97; i++)
		two.attack("one"); // attack 7 times
	two.beRepaired(10); // be repaired
	two.attack("one"); // attack
	two.attack("one"); // no energy points left
	two.beRepaired(10); // no energy points left
	two.highFivesGuys(); // high five
	two.takeDamage(100); // take damage and die
	two.takeDamage(10); // is dead and cannot take damage
	two.beRepaired(10); // is dead and cannot be repaired
	two.attack("one"); // is dead and cannot attack
	two.highFivesGuys(); // is dead and cannot high five
}
