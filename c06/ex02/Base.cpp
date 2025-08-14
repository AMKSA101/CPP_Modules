/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 12:13:27 by user              #+#    #+#             */
/*   Updated: 2025/08/14 11:27:55 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base() {}

Base * generate(void) {
	int i = rand() % 3;
	Base *ptr = NULL;
	
	switch (i)
	{
		case 0:
			ptr = new A;
			break;
		case 1:
			ptr = new B;
			break;
		case 2:
			ptr = new C;
			break;
		default:
			break;
	}
	return ptr;
}

void identify(Base* p) {
	
	if (p == NULL)
		return;
	if (dynamic_cast<A*>(p))
	{
		std::cout << "A"<< std::endl;
		return;
	}
	else if (dynamic_cast<B*>(p))
	{
		std::cout << "B"<< std::endl;
		return;
	}
	else if (dynamic_cast<C*>(p))
	{
		std::cout << "C"<< std::endl;
		return;
	}
	else {
		std::cout << "Error: unidentified pointer to class!!!" << std::endl;
		return;
	}
}

void identify(Base& p) {
	try {
		dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return;
	}
	catch (...) {}
	try {
		dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return;
	}
	catch (...) {}
	try {
		dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return;
	}
	catch (...) {}
	std::cout << "Error: unidentified reference to class!!!" << std::endl;
}
