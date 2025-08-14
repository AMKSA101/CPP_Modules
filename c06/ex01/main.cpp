/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 09:46:07 by user              #+#    #+#             */
/*   Updated: 2025/07/21 13:16:45 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {
	Data original;
	original.id = 42;
	original.name = "Test Test";

	std::cout << "Original Data - Address: " << &original
				<< ", ID: " << original.id 
				<< ", Name: " << original.name << std::endl;

	uintptr_t serialized = Serializer::serialize(&original);
	std::cout << "Serialized value: 0x" << std::hex << serialized<< std::dec << std::endl;
	
	Data* deserialized = Serializer::deserialize(serialized);
	std::cout << "Deserialized - Address: " << deserialized 
			<< ", ID: " << deserialized->id 
			<< ", Name: " << deserialized->name << std::endl;
	
	std::cout << "Address check: " << (&original == deserialized ? "SUCCESS" : "FAILED") << std::endl;
	
	deserialized->id = 99;
	deserialized->name = "Modified";
	std::cout << "After modification - Original ID: " << original.id 
			<< ", Name: " << original.name << std::endl;
	
	return 0;
}

