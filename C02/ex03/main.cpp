/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 10:42:25 by abamksa           #+#    #+#             */
/*   Updated: 2025/01/28 10:18:02 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) {
	Point a(0, 0);
	Point b(0, 1);
	Point c(1, 0);
	Point point(0.1, 0.2);

	if (point.bsp(a, b, c, point))
		std::cout << "Point is in the triangle" << std::endl;
	else
		std::cout << "Point is NOT in the triangle" << std::endl;
	return 0;
}
