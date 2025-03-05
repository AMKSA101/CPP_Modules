/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 10:39:43 by abamksa           #+#    #+#             */
/*   Updated: 2025/02/20 11:17:05 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
	
	int nb = -4;
	Zombie *zombie = zombieHorde(nb, "Abdelghani");
	if (zombie == NULL)
	{
		std::cout << "Error: Invalid number of zombies" << std::endl;
		return (1);
	}
	for (int i = 0; i < nb; i++)
		zombie[i].announce();
	delete[] zombie;
	return (0);
}
