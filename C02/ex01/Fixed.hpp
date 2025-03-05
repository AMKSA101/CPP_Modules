/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 10:43:23 by abamksa           #+#    #+#             */
/*   Updated: 2025/02/21 09:16:28 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	private:
		int _fixedPointValue;
		static const int _fractionalBits = 8;
	public:
		Fixed();
		Fixed( const int& value);
		Fixed( const float& value);
		Fixed( Fixed const& newFixed );
		Fixed& operator=( Fixed const & newFixed );
		friend std::ostream& operator<<(std::ostream& os, Fixed const& newFixed);
		~Fixed();
		
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
};

#endif
