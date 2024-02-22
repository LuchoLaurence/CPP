/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:39:19 by llaurenc          #+#    #+#             */
/*   Updated: 2024/02/12 16:39:20 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main( void )
{
	std::cout <<
		"------------------------------------------" << std::endl <<
		"               single test " 			<< std::endl <<
		"------------------------------------------" << std::endl

	<< std::endl;

	std::cout  << "----- Construct----- " << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "----- Destruct----- " << std::endl;
	delete j;
	delete i;

	std::cout <<
	"------------------------------------------" << std::endl <<
	"                multi test "	 			<< std::endl <<
	"------------------------------------------" << std::endl <<
	std::endl;

	std::cout << "----- Construct----- " << std::endl;
	const Animal* animals[6] =
	{
		new Dog(), new Dog(), new Dog(),
		new Cat(), new Cat(), new Cat(),
	};

	std::cout << "----- MakeSound----- " << std::endl;
	for (int i =0; i < 6; i++)
		animals[i]->makeSound();

	std::cout << "----- Destruct----- " << std::endl;
	for (int i = 0; i < 6; i++)
	{
		std::cout << i + 1 << std::endl;
		delete animals[i];
	}

	std::cout <<
		"------------------------------------------" << std::endl <<
		"               copy test " 				<< std::endl <<
		"------------------------------------------" << std::endl <<
	std::endl;

	std::cout << "----- Construct----- " << std::endl;
	Dog dog;
	Dog copyDog;
	copyDog = dog;
	Cat cat;
	Cat copyCat = cat;

	std::cout << "----- Destruct----- " << std::endl;
	return	0;
}

