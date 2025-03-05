/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 09:32:20 by abamksa           #+#    #+#             */
/*   Updated: 2025/03/02 11:39:21 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "Dog default constructor" << std::endl;
	try {
		_brain = new Brain();
	} catch (std::bad_alloc &e) {
		std::cerr << e.what() << std::endl;
	}
}

Dog::Dog(std::string type) : Animal(type) {
	std::cout << this->_type << " paramitric constructor" << std::endl;
	try {
		_brain = new Brain();
	} catch (std::bad_alloc &e) {
		std::cerr << e.what() << std::endl;
	}
}

Dog::Dog(const Dog &other) {
	std::cout << this->_type << " copy constructor" << std::endl;
	*this = other;
}

Dog &Dog::operator=(const Dog &other) {
	if (this != &other)
		this->_type = other._type;
	return *this;
}

Dog::~Dog() {
	delete _brain;
	std::cout << this->_type << " destructor" << std::endl;
}

void Dog::makeSound() const{
	std::cout << "Woof Woof!!" << std::endl;
}
