/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 09:27:40 by abamksa           #+#    #+#             */
/*   Updated: 2025/03/03 11:39:29 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "Cat default constructor" << std::endl;
	try {
		_brain = new Brain();
	} catch (std::bad_alloc &err) {
		std::cerr << err.what() << std::endl;
	}
}

Cat::Cat(std::string type) : Animal(type) {
	std::cout << this->_type << " paramitric constructor" << std::endl;
	try {
		_brain = new Brain();
	} catch (std::bad_alloc &err) {
		std::cerr << err.what() << std::endl;
	}
}

Cat::Cat(const Cat &other) {
	std::cout <<this->_type << " copy constructor" << std::endl;
	*this = other;
}

Cat &Cat::operator=(const Cat &other) {
	if (this != &other)
		this->_type = other._type;
	return *this;
}

Cat::~Cat() {
	delete _brain;
	std::cout << this->_type << " destructor" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Meow Meow!!" << std::endl;
}
