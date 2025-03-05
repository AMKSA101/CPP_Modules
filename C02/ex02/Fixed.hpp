/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 10:43:23 by abamksa           #+#    #+#             */
/*   Updated: 2025/02/21 09:30:30 by abamksa          ###   ########.fr       */
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
		Fixed& operator=( Fixed const & newFixed );
		friend std::ostream& operator<<(std::ostream& os, Fixed const& newFixed);
		Fixed( Fixed const& newFixed );
		Fixed( const float& value);
		Fixed( const int& value);
		~Fixed();
		
		bool operator>( Fixed const& newFixed ) const;
		bool operator<( Fixed const& newFixed ) const;
		bool operator>=( Fixed const& newFixed ) const;
		bool operator<=( Fixed const& newFixed ) const;
		bool operator==( Fixed const& newFixed ) const;
		bool operator!=( Fixed const& newFixed ) const;
		
		Fixed operator+( Fixed const& newFixed ) const;
		Fixed operator-( Fixed const& newFixed ) const;
		Fixed operator*( Fixed const& newFixed ) const;
		Fixed operator/( Fixed const& newFixed ) const;
		
		Fixed& operator++( void );
		Fixed operator++( int );
		Fixed& operator--( void );
		Fixed operator--( int );

		static Fixed& min( Fixed& a, Fixed& b );
		static Fixed const& min( Fixed const& a, Fixed const& b );
		static Fixed& max( Fixed& a, Fixed& b );
		static Fixed const& max( Fixed const& a, Fixed const& b );

		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
};

#endif
