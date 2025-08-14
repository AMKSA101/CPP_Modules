/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 11:26:55 by abamksa           #+#    #+#             */
/*   Updated: 2025/03/08 15:09:11 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	
	{
		try {
			Bureaucrat meta("Bob", 0);
		} catch (const std::exception& error) {
			std::cerr << "Exception caught: " << error.what() << " Bob is not a Bureaucrat!" << std::endl;
		}
	
	
		try {
			Bureaucrat mega("Alice", 200);
		} catch (const std::exception& error) {
			std::cerr << "Exception caught: " << error.what() << " Alice is not a Bureaucrat!"<< std::endl;
		}
	
		try{
			Bureaucrat mesa("Abdelghani", 150);
			std::cout << "Bureaucrat created successfully: " << mesa.getName() << std::endl;
		}
		catch (const std::exception& error) {
			std::cerr << "Exception caught: " << error.what() << " Abdelghani is not a Bureacrat!" << std::endl; 
		}
	}
	
	{
		Bureaucrat beta("Amksa", 150);
		try {
			beta.incrementGrade();
			std::cout << "Bureaucrat created successfully: " << beta.getName() << std::endl;
		} catch (const std::exception& error) {
			std::cerr << "Exception caught: " << error.what() << std::endl;
		}
		
		try {
			beta.decrementGrade();
			std::cout << "Bureaucrat created successfully: " << beta.getName() << std::endl;
		} catch (const std::exception& error) {
			std::cerr << "Exception caught: " << error.what() << " for " << beta.getName() <<  std::endl;
		}
		
		try {
			Bureaucrat alpha("Amksa", 150);
			alpha.decrementGrade();
			std::cout << "Bureaucrat created successfully: " << alpha.getName() << std::endl;
		} catch (const std::exception& error) {
			std::cerr << "Exception caught: " << error.what() << " Amksa is not a proper Bureaucrat!" << std::endl;
		}
	}
	
	return 0;
}
