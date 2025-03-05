/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 09:37:04 by abamksa           #+#    #+#             */
/*   Updated: 2025/02/24 08:04:55 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){
	ClapTrap claptrap("MyTrap");
	ClapTrap claptrap2(claptrap);
	ClapTrap claptrap3 = claptrap;

	claptrap.attack("enemy");
	claptrap.takeDamage(10);
	claptrap.beRepaired(5);
	return 0;
}
