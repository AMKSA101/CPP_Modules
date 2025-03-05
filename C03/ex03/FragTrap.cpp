/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 10:55:21 by abamksa           #+#    #+#             */
/*   Updated: 2025/02/02 10:57:56 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "FragTrap Default constructor" << std::endl;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "FragTrap Parametric Constructor" << std::endl;
	_hitpoints = 100;
	_energy_points = 100;
	_attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &other) {
	std::cout << "FragTrap Copy constructor" << std::endl;
	*this = other;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
	std::cout << "FragTrap Assignation operator" << std::endl;
	_name = other._name;
	_hitpoints = other._hitpoints;
	_energy_points = other._energy_points;
	_attack_damage = other._attack_damage;
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Destructor" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << _name << " high fives guys" << std::endl;
}
