/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 09:37:04 by abamksa           #+#    #+#             */
/*   Updated: 2025/02/24 08:29:59 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main( void )
{
	DiamondTrap dia("Amka");
	DiamondTrap dia2("Abdelghani");

	dia.attack("Aourir");
	dia.takeDamage( 10 );
	dia.beRepaired( 5 );
	dia.whoAmI();

	dia2.attack("Aoulouz");
	dia2.takeDamage( 10 );
	dia2.beRepaired( 15 );
	dia2.whoAmI();
	return 0;
}
