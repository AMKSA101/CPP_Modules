/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 11:03:29 by user              #+#    #+#             */
/*   Updated: 2025/08/24 11:24:23 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv) {

	if (argc < 2) {
		std::cerr << "Error: invalid argument count! | ./PmergeMe 9 3984 9298 3883 38" << std::endl;
		return 1;
	}
	
	try {
		PmergeMe pms;
		pms.parseInput(argc, ++argv);
		pms.sort();
		pms.displayAfter();
		pms.displayTiming();
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
		return 1;
	}
	
	return 0;
}
