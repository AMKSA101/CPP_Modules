/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 10:15:28 by abamksa           #+#    #+#             */
/*   Updated: 2025/02/18 17:49:25 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>

int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "\033[1;31m* LOUD AND UNBEARABLE FEEDBACK NOISE *\033[0m" <<std::endl;
		return (0);
	}
	for (int i = 1; i < ac; i++)
	{
		for (int j = 0; av[i][j]; j++)
			std::cout << "\033[1;32m" << (char)toupper(av[i][j]) << "\033[0m";
	}
	std::cout << std::endl;
	return (0);
}
