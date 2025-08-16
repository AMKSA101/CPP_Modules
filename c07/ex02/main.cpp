/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 11:55:37 by user              #+#    #+#             */
/*   Updated: 2025/08/16 15:23:31 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	std::cout << "=== Array Class Template Tests ===" << std::endl;

	std::cout << "\n1. Default constructor test:" << std::endl;
	Array<int> emptyArray;
	std::cout << "Empty array size: " << emptyArray.size() << std::endl;

	std::cout << "\n2. Parameterized constructor test:" << std::endl;
	Array<int> intArray(5);
	std::cout << "Int array size: " << intArray.size() << std::endl;

	std::cout << "\n3. Copy constructor test:" << std::endl;
	Array<int> secIntArray(intArray);
	std::cout << "secIntArray size: " << secIntArray.size() << std::endl;

	std::cout << "\n4. String parametrized constructor test:" << std::endl;
	Array<std::string> stringArray(2);
	stringArray[0] = "Amksa";
	std::cout << "Int array size: " << intArray.size() << std::endl;
	std::cout << "stringArray[0] == " << stringArray[0] << std::endl;

	std::cout << "\n5. String copy constructor test:" << std::endl;
	Array<std::string> secStringArray = stringArray;
	secStringArray[1] = "Abdelghani";
	std::cout << "Int array size: " << intArray.size() << std::endl;
	std::cout << "stringArray == " << secStringArray[0] << " " << secStringArray[1] << std::endl;

std::cout << "\n6. Exception handling test:" << std::endl;
try {
	std::cout << emptyArray[0] << std::endl;
} catch (const std::exception& e) {
	std::cout << "Exception caught for empty array access!" << std::endl;
}

std::cout << "\n7. Deep copy independence test:" << std::endl;
intArray[0] = 42;
secIntArray[0] = 99;
std::cout << "Original[0]: " << intArray[0] << ", Copy[0]: " << secIntArray[0] << std::endl;
	return 0;
}
