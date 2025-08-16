/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 13:10:41 by user              #+#    #+#             */
/*   Updated: 2025/08/15 10:29:16 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void printInt(int &value)
{
	std::cout << value << " ";
}

void printString(const std::string &value)
{
	std::cout << value << " ";
}

template <typename T>
void printElement(const T &element)
{
	std::cout << element << " ";
}

void doubleInt(int &value)
{
	value *= 2;
}

int main()
{
	// Test 1: Print integers
	std::cout << "=== Testing int array ===" << std::endl;
	int intArr[5] = {1, 2, 3, 4, 5};
	std::cout << "Original: ";
	iter(intArr, 5, printInt); // Fix: Remove ()
	std::cout << std::endl;

	// Test 2: Modify integers
	std::cout << "Doubling values..." << std::endl;
	iter(intArr, 5, doubleInt);
	std::cout << "After doubling: ";
	iter(intArr, 5, printInt);
	std::cout << std::endl;

	// Test 3: Template function with different types
	std::cout << "\n=== Testing template function ===" << std::endl;
	std::string stringArr[2] = {"Amksa", "Abdelghani"};
	iter(stringArr, 2, printElement<std::string>);
	std::cout << std::endl;
	return 0;
}
