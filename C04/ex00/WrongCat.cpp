/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 10:41:05 by abamksa           #+#    #+#             */
/*   Updated: 2025/02/04 11:27:11 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCAt") {
	std::cout << "WrongCat default constructor" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type) {
	std::cout << "WrongCat paramitric constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) {
	std::cout << "WrongCat copy constructor" << std::endl;
	*this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
	if (this != &other)
		this->_type = other._type;
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor" << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "WrongCat Meow Meow!!" << std::endl;
}


