/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 12:13:31 by user              #+#    #+#             */
/*   Updated: 2025/08/14 11:41:34 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main() {
	srand(time(0));

	Base *arr[5];
	
	for(int i = 0; i < 5; i++) {
		arr[i] = generate();
	}
	
	for (int i = 0; i < 5; i++) {
		std::cout << "Test " << i + 1 << ": ";
		identify(arr[i]);
		std::cout << '\r';
		identify(*arr[i]);
	}
	
	for (int i = 0; i < 5; i++) {
		delete arr[i];
	}
}
