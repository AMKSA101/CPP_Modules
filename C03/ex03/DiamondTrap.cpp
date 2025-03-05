/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 11:08:22 by abamksa           #+#    #+#             */
/*   Updated: 2025/02/02 11:22:13 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	std::cout << "DiamondTrap Default constructor" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name) {
	std::cout << "DiamondTrap Name constructor" << std::endl;
	this->_name = name;
	this->ClapTrap::_name = name + "_clap_name";
	FragTrap::_hitpoints = 100;
	ScavTrap::_energy_points = 50;
	FragTrap::_attack_damage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) {
	std::cout << "DiamondTrap Copy constructor" << std::endl;
	*this = other;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
	std::cout << "DiamondTrap Assignation operator" << std::endl;
	if (this == &other)
		return *this;
	ClapTrap::operator=(other);
	ScavTrap::operator=(other);
	FragTrap::operator=(other);
	return *this;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap Destructor" << std::endl;
}

void	DiamondTrap::whoAmI() {
	std::cout << "My name is " << this->_name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}
