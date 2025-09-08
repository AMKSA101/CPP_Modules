/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 11:44:59 by user              #+#    #+#             */
/*   Updated: 2025/08/21 18:09:48 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char *av[]) {
	if (ac != 2) {
		std::cerr << "Not enough arguments!!" << std::endl;
		return 1;
	}
	else {
		BitcoinExchange btc;
		btc.parseInputFile(av[1]);
	}

	return 0;
}
