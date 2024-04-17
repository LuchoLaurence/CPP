/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 11:29:28 by llaurenc          #+#    #+#             */
/*   Updated: 2024/04/17 10:01:31 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
	std::cout << RED << "----- TESTS INVALID FORM CREATION-----" << std::endl << std::endl;
	try {
		Form f1("Something", 1, 0);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Form f2("Something", 1, 151);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl << GREEN << "----- TESTS TO SIGN FORMS -----" << std::endl << std::endl;
	
	Bureaucrat abby("Abby", 75);
	
	Form state("State", 75, 150);
	Form presidential_form("Presidential", 74, 150);

	Form kuala_lumpur(state);
	Form united_states(presidential_form);

	std::cout << std::endl << YELLOW << "----- FORM STATUSES w COPIED -----" << std::endl << std::endl;
	std::cout << state << std::endl;
	std::cout << presidential_form << std::endl;

	std::cout << std::endl << kuala_lumpur << std::endl;
	std::cout << united_states << std::endl;

	std::cout << std::endl;
	
	abby.signForm(state);
	abby.signForm(presidential_form);

	std::cout << std::endl << MAGENTA << "----- FORM STATUSES w DEEP COPIED -----" << std::endl << std::endl;

	std::cout << state << std::endl;
	std::cout << presidential_form << std::endl;

	std::cout << std::endl;

	std::cout << kuala_lumpur << std::endl;
	std::cout << united_states << std::endl;
	
	std::cout << std::endl << GREEN << "----- PROMOTE ABBY TRY AGAIN -----" << std::endl << std::endl;
	abby.incrementGrade();
	
	try {
		presidential_form.beSigned(abby);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	abby.signForm(kuala_lumpur);
	abby.signForm(united_states);
	std::cout << std::endl;
	try {
		united_states.beSigned(abby);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << GREEN << "----- FROM STATUSES -----" << std::endl << std::endl;
	std::cout << state << std::endl
		<< presidential_form << std::endl
		<< kuala_lumpur << std::endl
		<< united_states << std::endl;

	std::cout << std::endl;
}
