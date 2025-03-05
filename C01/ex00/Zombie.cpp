/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 10:32:17 by abamksa           #+#    #+#             */
/*   Updated: 2025/01/23 10:37:27 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name){
	this->name = name;
}

void Zombie::announce(void){
	std::cout<< name<< ": BraiiiiiiinnnzzzZ..."<<std::endl;
}

Zombie::~Zombie(){
	std::cout<< name<< " is dead"<<std::endl;
}
