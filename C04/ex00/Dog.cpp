/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 09:32:20 by abamksa           #+#    #+#             */
/*   Updated: 2025/02/04 11:26:38 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog(std::string type) : Animal(type) {
	std::cout << "Dog paramitric constructor" << std::endl;
}

Dog::Dog(const Dog &other) {
	std::cout << "Dog copy constructor" << std::endl;
	*this = other;
}

Dog &Dog::operator=(const Dog &other) {
	if (this != &other)
		this->_type = other._type;
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog destructor" << std::endl;
}

void Dog::makeSound() const{
	std::cout << "Woof Woof!!" << std::endl;
}
