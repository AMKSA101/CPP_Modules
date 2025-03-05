/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 10:08:50 by abamksa           #+#    #+#             */
/*   Updated: 2025/01/28 10:12:55 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point( Point const& newPoint ) : _x(newPoint.getX()), _y(newPoint.getY()) {}

Point::Point( const float& x, const float& y ) : _x(x), _y(y) {}

Point& Point::operator=( Point const& newPoint ) {
	if (this != &newPoint) {
		(Fixed)_x = newPoint.getX();
		(Fixed)_y = newPoint.getY();
	}
	return *this;
}

Fixed Point::getX() const {
	return this->_x;
}

Fixed Point::getY() const {
	return this->_y;
}

Point::~Point() {}
