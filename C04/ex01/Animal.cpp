/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 09:25:30 by abamksa           #+#    #+#             */
/*   Updated: 2025/02/04 13:03:08 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal") {
	std::cout << "Animal default constructor" << std::endl;
}

Animal::Animal(std::string type) : _type(type) {
	std::cout << this->_type << " constructor" << std::endl;
}

Animal::~Animal() {
	std::cout << this->_type << " destructor" << std::endl;
}

Animal::Animal(const Animal &other) {
	std::cout << this->_type << " copy constructor" << std::endl;
	*this = other;
}

Animal &Animal::operator=(const Animal &other) {
	if (this != &other)
		this->_type = other._type;
	return *this;
}

std::string Animal::getType() const {
	return this->_type;
}

void Animal::makeSound() const {
	std::cout <<  this->_type << " sound" << std::endl;
}
