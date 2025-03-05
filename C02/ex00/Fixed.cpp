/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 10:45:13 by abamksa           #+#    #+#             */
/*   Updated: 2025/02/21 08:45:46 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const & src ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed& Fixed::operator=( Fixed const& newFixed ) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &newFixed)
		this->_fixedPointValue = newFixed.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPointValue;
}

void Fixed::setRawBits( int const raw ) {
	this->_fixedPointValue = raw;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}
