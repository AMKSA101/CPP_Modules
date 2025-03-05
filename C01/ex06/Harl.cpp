/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 09:23:20 by abamksa           #+#    #+#             */
/*   Updated: 2025/01/25 10:28:28 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

void Harl::complain(std::string level)
{
	int i = 0;
	std::string levels[4] = {"debug", "info", "warning", "error"};
	while (i < 4 && level.compare(levels[i]))
		i++;
	switch (i){
		case 0:
			debug();
		case 1:
			info();
		case 2:
			warning();
		case 3:
			error();
			break;
		default:
			std::cout <<Bold<< "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

void	Harl::debug( void ) {
	std::cout << "[ DEBUG ]"<< std::endl<<Bold<<Yellow<<\
	"love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"\
	<<Reset<< std::endl<< std::endl;
}

void	Harl::info( void ) {
	std::cout <<"[ INFO ]"<< std::endl<<Bold<<Green<<\
	"I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!"\
	<<Reset<< std::endl<< std::endl;
}

void	Harl::warning( void ) {
	std::cout << "[ WARNING ]"<<std::endl<<Bold<<Blue<<\
	"I think I deserve to have some extra bacon for free. I've been coming foryears whereas you started working here since last month."\
	 <<Reset<< std::endl<< std::endl;
}

void	Harl::error( void ) {
	std::cout <<"[ ERROR ]"<< std::endl<<Bold<<Red<<\
	"This is unacceptable! I want to speak to the manager now."\
	<<Reset<< std::endl<< std::endl;
}

Harl::~Harl(){}
