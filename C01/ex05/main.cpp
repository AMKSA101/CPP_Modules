/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 09:16:09 by abamksa           #+#    #+#             */
/*   Updated: 2025/02/20 11:02:41 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <algorithm>

int main()
{
	std::string level;
	Harl harl;

	do {
		std::cout << std::endl <<Bold<< "Enter the level of output (debug, info, warning, error): (exit) to exit:: " << Reset;
		std::cin >> level;
		std::transform(level.begin(), level.end(), level.begin(), ::tolower);
		if (level.compare("exit") == 0)
			break;
		harl.complain(level);
	} while (level.compare("exit") != 0);
	return 0;
}
