/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 10:45:13 by abamksa           #+#    #+#             */
/*   Updated: 2025/02/21 09:38:23 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0) {
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

std::ostream& operator<<(std::ostream& os, Fixed const& newFixed) {
	return os << newFixed.toFloat();
}

bool Fixed::operator>( Fixed const& newFixed ) const {
	return _fixedPointValue > newFixed.getRawBits();
}

bool Fixed::operator<( Fixed const& newFixed ) const {
	return _fixedPointValue < newFixed.getRawBits();
}

bool Fixed::operator>=( Fixed const& newFixed ) const {
	return _fixedPointValue >= newFixed.getRawBits();
}

bool Fixed::operator<=( Fixed const& newFixed ) const {
	return _fixedPointValue <= newFixed.getRawBits();
}

bool Fixed::operator==( Fixed const& newFixed ) const {
	return _fixedPointValue == newFixed.getRawBits();
}

bool Fixed::operator!=( Fixed const& newFixed ) const {
	return _fixedPointValue != newFixed.getRawBits();
}

Fixed Fixed::operator+( Fixed const& newFixed ) const {
	return Fixed(this->toFloat() + newFixed.toFloat());
}

Fixed Fixed::operator-( Fixed const& newFixed ) const {
	return Fixed(this->toFloat() - newFixed.toFloat());
}

Fixed Fixed::operator*( Fixed const& newFixed ) const {
	return Fixed(this->toFloat() * newFixed.toFloat());
}

Fixed Fixed::operator/( Fixed const& newFixed ) const {
	return Fixed(this->toFloat() / newFixed.toFloat());
}

Fixed& Fixed::operator++( void ) {
	_fixedPointValue++;
	return *this;
}

Fixed Fixed::operator++( int ) {
	Fixed tmp(*this);
	operator++();
	return tmp;
}

Fixed& Fixed::operator--( void ) {
	_fixedPointValue--;
	return *this;
}

Fixed Fixed::operator--( int ) {
	Fixed tmp(*this);
	operator--();
	return tmp;
}

Fixed& Fixed::min( Fixed& a, Fixed& b ) {
	return a < b ? a : b;
}

Fixed const& Fixed::min( Fixed const& a, Fixed const& b ) {
	return a < b ? a : b;
}

Fixed& Fixed::max( Fixed& a, Fixed& b ) {
	return a > b ? a : b;
}

Fixed const& Fixed::max( Fixed const& a, Fixed const& b ) {
	return a > b ? a : b;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}
