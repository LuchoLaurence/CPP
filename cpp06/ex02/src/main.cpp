/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:48:58 by llaurenc          #+#    #+#             */
/*   Updated: 2024/05/23 10:58:53 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"
#include <cstdlib>
#include <ctime>
#include <exception>

Base * generate()
{
	std::srand(static_cast<unsigned int>(std::time(0)));
	int randVal = std::rand();
	if (randVal % 3 == 0)
		return new A;
	else if (randVal % 3 == 1)
		return new B;
	else
		return new C;
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "The actual type of the object pointed to by p is A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "The actual type of the object pointed to by p is B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "The actual type of the object pointed to by p is C" << std::endl;
	else
		std::cout << "error" << std::endl;
}
void  identify(Base& p)
{
	try 
	{
		A & a = dynamic_cast<A &>(p);
		std::cout << "The actual type of the object Pointed to by p is A" << std::endl;
		static_cast<void>(a);
	}
	catch (std::exception &bc)
	{
		try 
		{
		B & b = dynamic_cast<B &>(p);
		std::cout << "The actual type of the object Pointed to by p is B" << std::endl;	
		static_cast<void>(b);
		}
		catch (std::exception &bc)
		{
			try
			{
				C & c = dynamic_cast<C &>(p);
				std::cout << "The actual type of the object Pointed to by p is C" << std::endl;
				static_cast<void>(c);
			}
			catch(std::exception &bc)
			{
				std::cout << bc.what() << std::endl;
			}
			
		}
	}
}
int main()
{
	Base *test = NULL;
	test = generate();
	Base& ref = *test;
	identify(test);
	identify(ref);
	delete test;

	return 0;
}
