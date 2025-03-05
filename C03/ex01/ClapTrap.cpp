/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 09:32:12 by abamksa           #+#    #+#             */
/*   Updated: 2025/02/24 08:41:36 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "ClapTrap Default constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energy_points(10), _attack_damage(0) {
	std::cout << "ClapTrap Parametric constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
	std::cout << "ClapTrap Copy constructor" << std::endl;
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	std::cout << "ClapTrap Assignation operator" << std::endl;
	if (this != &other) {
		this->_name = other._name;
		this->_hitpoints = other._hitpoints;
		this->_energy_points = other._energy_points;
		this->_attack_damage = other._attack_damage;
	}
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap Destructor" << std::endl;
}

void ClapTrap::attack(std::string const &target) {
	if (_energy_points <= 0 || _hitpoints <= 0) {
		std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " attack " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
	_energy_points -= 1;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (_hitpoints <= (int)amount) {
		std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
	_hitpoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_energy_points <= 0 || _hitpoints <= 0) {
		std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " be repaired for " << amount << " hit points!" << std::endl;
	_energy_points -= 1;
	_hitpoints += amount;
}
