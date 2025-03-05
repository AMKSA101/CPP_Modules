/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 10:39:12 by abamksa           #+#    #+#             */
/*   Updated: 2025/02/02 10:49:45 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap Default constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->_hitpoints = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "ScavTrap Parametric constructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) {
	std::cout << "ScavTrap Copy constructor" << std::endl;
	*this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
	std::cout << "ScavTrap Assignation operator" << std::endl;
	if (this != &other) {
		this->_name = other._name;
		this->_hitpoints = other._hitpoints;
		this->_energy_points = other._energy_points;
		this->_attack_damage = other._attack_damage;
	}
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructor" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
}
