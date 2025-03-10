/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 10:03:47 by abamksa           #+#    #+#             */
/*   Updated: 2025/01/28 10:06:52 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool Point::bsp( Point const a, Point const b, Point const c, Point const point ) const {
	Fixed const x = point.getX();
	Fixed const y = point.getY();
	Fixed const x1 = a.getX();
	Fixed const y1 = a.getY();
	Fixed const x2 = b.getX();
	Fixed const y2 = b.getY();
	Fixed const x3 = c.getX();
	Fixed const y3 = c.getY();
	Fixed const a1 = ((x2 - x1) * (y - y1)) - ((x - x1) * (y2 - y1));
	Fixed const a2 = ((x3 - x2) * (y - y2)) - ((x - x2) * (y3 - y2));
	Fixed const a3 = ((x1 - x3) * (y - y3)) - ((x - x3) * (y1 - y3));
	if ((a1 >= 0 && a2 >= 0 && a3 >= 0) || (a1 <= 0 && a2 <= 0 && a3 <= 0))
		return true;
	return false;
}
