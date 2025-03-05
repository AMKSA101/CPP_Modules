/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 11:31:22 by abamksa           #+#    #+#             */
/*   Updated: 2025/01/23 12:00:47 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): name(name), weapon(&weapon){}

void HumanA::attack(void){
	if (this->weapon->getType() != "")
		std::cout<< name<< " attacks with his "<< weapon->getType()<< std::endl;
	else
		std::cout<< name<< " can't engage in combat, no weapon provided"<< std::endl;
}

HumanA::~HumanA(){}
