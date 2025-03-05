/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 09:16:09 by abamksa           #+#    #+#             */
/*   Updated: 2025/01/25 10:22:51 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <algorithm>

int main(int ac, char **av)
{
	std::string level;
	Harl harl;

	if (ac == 2)
	{
		level = av[1];
		std::transform(level.begin(), level.end(), level.begin(), ::tolower);
		harl.complain(level);
	}
	else
		std::cout << "Usage: ./harlFilter [debug/info/warning/error]" << std::endl;
	return 0;
}
