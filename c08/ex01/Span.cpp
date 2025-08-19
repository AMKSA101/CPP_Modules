/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 14:52:02 by user              #+#    #+#             */
/*   Updated: 2025/08/19 17:10:16 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int d) : N(d){}

Span::Span(const Span &other) : vect(other.vect), N(other.N) {}

Span::~Span() {}

Span& Span::operator=(const Span &other) {
	if (this != &other){
		vect = other.vect;
		N = other.N;
	}
	return *this;
}

void Span::addNumber(int nb) {
	if (vect.size() + 1 > N)
		throw std::length_error("Can't add the number since the vector.size() == N");
	else
		vect.push_back(nb);
}

int Span::shortestSpan() {

	if (vect.size() < 2)
		throw std::logic_error("Cannot calculate span with less than 2 elements");
	
	std::vector<int> sortedVect = vect;
	std::sort(sortedVect.begin(), sortedVect.end());
	int minSpan = sortedVect[1] - sortedVect[0];
	for (size_t i = 1; i < sortedVect.size() - 1; ++i) {
		int currentSpan = sortedVect[i + 1] - sortedVect[i];
		minSpan = std::min(minSpan, currentSpan);
	}
	return minSpan;
}

int Span::longestSpan() {

	if (vect.size() < 2)
		throw std::logic_error("Cannot calculate span with less than 2 elements");

	std::vector<int>::iterator minElement = std::min_element(vect.begin(), vect.end());
	std::vector<int>::iterator maxElement = std::max_element(vect.begin(), vect.end());
	return (*maxElement - *minElement);
}
