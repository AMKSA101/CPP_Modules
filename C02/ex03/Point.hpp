/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 10:03:55 by abamksa           #+#    #+#             */
/*   Updated: 2025/01/28 10:08:46 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point {
	public:
		Point();
		Point( Point const& newPoint );
		Point( const float& x, const float& y );
		Point& operator=( Point const& newPoint );
		~Point();
		bool bsp( Point const a, Point const b, Point const c, Point const point ) const;
		Fixed getX() const;
		Fixed getY() const;
	private:
		Fixed const _x;
		Fixed const _y;
};
