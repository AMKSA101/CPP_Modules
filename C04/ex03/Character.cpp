/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 10:28:52 by abamksa           #+#    #+#             */
/*   Updated: 2025/03/03 14:11:50 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
	{
		_materias[i] = NULL;
		_savedMateria[i] = NULL;
	}
}

Character::Character(const Character &other) : _name(other._name)
{
	for (int i = 0; i < 4; i++)
	{
		if (other._materias[i])
			this->_materias[i] = other._materias[i]->clone();
		else
		{
			this->_materias[i] = NULL;
			_savedMateria[i] = NULL;
		}
	}
}

Character &Character::operator=(const Character &other)
{
	if (this != &other)
	{
		this->_name = other._name;
		for (int i = 0; i < 4; i++)
		{
			if (this->_materias[i])
				delete this->_materias[i];
			if (other._materias[i])
				this->_materias[i] = other._materias[i]->clone();
			else
			{
				this->_materias[i] = NULL;
				_savedMateria[i] = NULL;
			}
		}
	}
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i])
			delete this->_materias[i];
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->_savedMateria[i])
			delete this->_savedMateria[i];
	}
}

std::string const &Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_materias[i])
		{
			this->_materias[i] = m;
			return;
		}
	}
	if (m)
		delete m;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && this->_materias[idx])
	{
		_savedMateria[idx] = this->_materias[idx];
		this->_materias[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && this->_materias[idx])
		this->_materias[idx]->use(target);
}
