/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 10:45:13 by abamksa           #+#    #+#             */
/*   Updated: 2025/01/28 09:40:55 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const& newFixed ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = newFixed;
}

Fixed::Fixed( const int& value) {
	std::cout << "Int constructor called" << std::endl;
	_fixedPointValue = value << _fractionalBits;
}

Fixed::Fixed( const float& value) {
	std::cout << "Float constructor called" << std::endl;
	_fixedPointValue = roundf(value * (1 << _fractionalBits));
}

Fixed& Fixed::operator=( Fixed const& newFixed ) {
	std::cout << "Assignation operator called" << std::endl;
	_fixedPointValue = newFixed.getRawBits();
	return *this;
}

std::ostream& operator<<(std::ostream& os, Fixed const& newFixed) {
	return os << newFixed.toFloat();
}

int Fixed::getRawBits( void ) const {
	return _fixedPointValue;
}

void Fixed::setRawBits( int const raw ) {
	_fixedPointValue = raw;
}

float Fixed::toFloat( void ) const {
	return (float)_fixedPointValue / (1 << _fractionalBits);
}

int Fixed::toInt( void ) const {
	return _fixedPointValue >> _fractionalBits;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}
