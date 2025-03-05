/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 10:32:17 by abamksa           #+#    #+#             */
/*   Updated: 2025/01/23 11:02:14 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){}

void Zombie::announce(void){
	std::cout<< name<< ": BraiiiiiiinnnzzzZ..."<<std::endl;
}

void Zombie::setName(std::string name){
	this->name = name;
}

Zombie::~Zombie(){
	std::cout<< name<< " is dead"<<std::endl;
}
