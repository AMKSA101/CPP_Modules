/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 09:37:04 by abamksa           #+#    #+#             */
/*   Updated: 2025/02/02 10:43:41 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	ScavTrap scav1("Scav1");
	ScavTrap scav2(scav1);
	ScavTrap scav3 = scav1;

	scav1.attack("Player1");
	scav1.takeDamage(10);
	scav1.beRepaired(5);
	scav1.guardGate();
	return 0;
}
