/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 11:26:55 by abamksa           #+#    #+#             */
/*   Updated: 2025/03/08 15:46:36 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

#include <iostream>
#include <cassert>

int main() {

	// Test 1: Valid Bureaucrat and Form creation
	try {
		Bureaucrat b("Bob", 50);
		Form f("Tax 1", 70, 40); // Sign grade 70, execute grade 40

		std::cout << b << std::endl;
		std::cout << f << std::endl;

	} catch (std::exception& e) {
		std::cerr << "Unexpected exception: " << e.what() << std::endl;
		return 1;
	}

	// Test 2: Bureaucrat signs a form successfully
	try {
		Bureaucrat b("Alice", 40);
		Form f("Tax 2", 70, 40);

		b.signForm(f);
		std::cout << f << std::endl; // Should show the form as signed
		// assert(f.getSign() == true);  // uncomment if using assert
	} catch (std::exception& e) {
		std::cerr << "Unexpected exception: " << e.what() << std::endl;
		return 1;
	}

	// Test 3: Bureaucrat fails to sign a form (grade too low)
	try {
		Bureaucrat b("Charlie", 80);
		Form f("Tax 3", 70, 40);


		b.signForm(f); // Expect GradeTooLowException

		//This shoul dnot be called
		// assert(f.getSign() == false);
	} catch (const Form::GradeTooLowException& e) {
		std::cerr << "Expected exception: " << e.what() << std::endl; // Correct behavior
			//assert(f.getSign() == false); // uncomment when using assert
	} catch (std::exception& e) {
		std::cerr << "Unexpected exception: " << e.what() << std::endl;
		return 1;
	}

	// Test 4 & 5: Form creation with invalid grades (Too High / Too Low)
	try {
		Form f("Tax 4", 0, 40); // Too high sign grade

	} catch (const Form::GradeTooHighException& e) {
		std::cerr << "Expected exception: " << e.what() << std::endl;

	} catch (std::exception& e) {
		std::cerr << "Unexpected exception: " << e.what() << std::endl;
		return 1;
	}

	try {
		Form f("Tax 5", 100, 155); // Too low execute grade
	} catch (const Form::GradeTooLowException& e) {
		std::cerr << "Expected exception: " << e.what() << std::endl;
	} catch (std::exception& e) {
		std::cerr << "Unexpected exception: " << e.what() << std::endl;
		return 1;

	}

	std::cout << "All tests passed!" << std::endl;
	return 0;
}
