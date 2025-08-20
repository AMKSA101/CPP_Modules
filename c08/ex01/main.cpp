/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 12:35:04 by user              #+#    #+#             */
/*   Updated: 2025/08/20 11:02:13 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try
	{
		std::cout << "=== Basic Test ===" << std::endl;
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);

		sp.addNumber(11);
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "\n=== addRange with vector ===" << std::endl;
		Span sp = Span(12);
		std::vector<int> numbers;

		for (int i = 0; i < 5; ++i)
			numbers.push_back((i + 1) * 5 / 2);

		sp.addRange(numbers.begin(), numbers.end());
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "\n=== Large Dataset Test ===" << std::endl;
		Span bigSpan(10000);

		std::vector<int> bigNumbers;
		for (int i = 0; i < 10000; ++i)
			bigNumbers.push_back(i * 2);

		bigSpan.addRange(bigNumbers.begin(), bigNumbers.end());
		std::cout << "10K numbers - Shortest: " << bigSpan.shortestSpan() << std::endl;
		std::cout << "10K numbers - Longest: " << bigSpan.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
