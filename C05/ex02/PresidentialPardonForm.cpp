/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 11:58:08 by abamksa           #+#    #+#             */
/*   Updated: 2025/03/09 11:59:06 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & presidentialPardonForm) : AForm(presidentialPardonForm) {
	*this = presidentialPardonForm;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & presidentialPardonForm) {
	if (this != &presidentialPardonForm)
		_target = presidentialPardonForm._target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	AForm::execute(executor);
	std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
