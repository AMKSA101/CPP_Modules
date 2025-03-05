/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 10:38:06 by abamksa           #+#    #+#             */
/*   Updated: 2025/02/05 11:51:50 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &other) {
	*this = other;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other) {
	if (this != &other) {
		for (int i = 0; i < 4; i++) {
			if (other._materia[i])
				_materia[i] = other._materia[i]->clone();
			else
				_materia[i] = NULL;
		}
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (_materia[i])
			delete _materia[i];
	}
}

void MateriaSource::learnMateria(AMateria *m) {
	for (int i = 0; i < 4; i++) {
		if (!_materia[i]) {
			_materia[i] = m;
			return;
		}
	}
	if (m)
		delete m;
}

AMateria *MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < 4; i++) {
		if (_materia[i] && _materia[i]->getType() == type)
			return _materia[i]->clone();
	}
	return NULL;
}
