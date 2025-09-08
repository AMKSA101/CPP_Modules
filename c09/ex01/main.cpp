/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 10:22:52 by user              #+#    #+#             */
/*   Updated: 2025/08/23 18:32:01 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char *av[]) {
	RPN calculator;
	int result = 0;
	
	if (ac != 2) {
		std::cerr << "Usage: " << av[0] << " \"<RPN expression>\"" << std::endl;
		std::cerr << "Example: " << av[0] << " \"8 9 * 9 -\"" << std::endl;
		return 1;
	}
	
	std::string input(av[1]);
	if (input.empty()) {
		std::cerr << "Error: Empty expression" << std::endl;
		return 1;
	}
	
	result = calculator.rpnCalculation(input);
	if (result == -1)
		return 1;

	std::cout << result<< std::endl;
	return 0;
}
