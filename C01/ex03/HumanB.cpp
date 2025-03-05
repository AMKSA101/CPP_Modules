/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 11:33:15 by abamksa           #+#    #+#             */
/*   Updated: 2025/01/23 11:53:01 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name){}

void HumanB::attack(void){
	if (this->weapon != NULL && this->weapon->getType() != "")
		std::cout<< name<< " attacks with his "<< weapon->getType()<< std::endl;
	else
		std::cout<< name<< " can't engage in combat, no weapon provided"<< std::endl;
}

void HumanB::setWeapon(Weapon &weapon){
	this->weapon = &weapon;
}

HumanB::~HumanB(){}
