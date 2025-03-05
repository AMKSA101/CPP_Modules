/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 09:23:20 by abamksa           #+#    #+#             */
/*   Updated: 2025/02/20 11:05:23 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

void Harl::complain(std::string level)
{
	void (Harl::*ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = {"debug", "info", "warning", "error"};
	for (int i = 0; i < 4; i++)
	{
		if (level.compare(levels[i]) == 0)
		{
			(this->*ptr[i])();
			break;
		}
	}
}

void	Harl::debug( void ) {
	std::cout << std::endl<<Bold<<Yellow<< "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" <<Reset<< std::endl;
}

void	Harl::info( void ) {
	std::cout << std::endl<<Bold<<Green<< "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" <<Reset<< std::endl;
}

void	Harl::warning( void ) {
	std::cout << std::endl<<Bold<<Blue<< "I think I deserve to have some extra bacon for free. I've been coming foryears whereas you started working here since last month." <<Reset<< std::endl;
}

void	Harl::error( void ) {
	std::cout << std::endl<<Bold<<Red<< "This is unacceptable! I want to speak to the manager now." <<Reset<< std::endl;
}

Harl::~Harl(){}
