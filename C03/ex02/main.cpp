/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 09:37:04 by abamksa           #+#    #+#             */
/*   Updated: 2025/02/02 11:02:25 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{
	FragTrap frog( "nki" );
	FragTrap frog2( "nta" );

	frog.attack( "the air" );
	frog.takeDamage( 10 );
	frog.beRepaired( 10 );
	frog.highFivesGuys();

	frog2.attack( "the sky" );
	frog2.takeDamage( 10 );
	frog2.beRepaired( 10 );
	frog2.highFivesGuys();
	return 0;
}
