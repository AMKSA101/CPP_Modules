/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 10:39:43 by abamksa           #+#    #+#             */
/*   Updated: 2025/01/23 10:48:53 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
	Zombie *zombie = newZombie("Abdelghani");
	zombie->announce();
	randomChump("amksa");
	delete zombie;
	return (0);
}
