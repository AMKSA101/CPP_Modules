/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 15:47:53 by abamksa           #+#    #+#             */
/*   Updated: 2025/03/09 15:48:36 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(Intern const &src) {
	*this = src;
}

Intern &Intern::operator=(Intern const &src) {
	(void)src;
	return *this;
}

Intern::~Intern() {}

AForm *Intern::makeForm(std::string formName, std::string target) {
	if (formName == "ShrubberyCreationForm") {
		std::cout << "Intern creates " << formName << std::endl;
		return new ShrubberyCreationForm(target);
	} else if (formName == "RobotomyRequestForm") {
		std::cout << "Intern creates " << formName << std::endl;
		return new RobotomyRequestForm(target);
	} else if (formName == "PresidentialPardonForm") {
		std::cout << "Intern creates " << formName << std::endl;
		return new PresidentialPardonForm(target);
	} else {
		throw FormNotFoundException();
	}
}

const char *Intern::FormNotFoundException::what() const throw() {
	return "Form not found";
}

