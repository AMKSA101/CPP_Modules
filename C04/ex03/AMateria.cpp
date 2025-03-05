/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 09:30:34 by abamksa           #+#    #+#             */
/*   Updated: 2025/03/03 12:17:45 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria() {}

AMateria::AMateria(std::string const & type) : _type(type) {}

AMateria::AMateria(const AMateria &other) {
	*this = other;
}

AMateria &AMateria::operator=(const AMateria &other) {
	if (this != &other)
		this->_type = other._type;
	return *this;
}

AMateria::~AMateria() {}

std::string const & AMateria::getType() const {
	return this->_type;
}

void AMateria::use(ICharacter& target) {
	(void)target;
}

AMateria* AMateria::clone() const {
	return 0;
}
