/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 11:43:58 by abamksa           #+#    #+#             */
/*   Updated: 2025/01/23 11:45:31 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type){}

void Weapon::setType(std::string type){
	this->type = type;
}

const std::string& Weapon::getType(void){
	return this->type;
}

Weapon::~Weapon(){}

