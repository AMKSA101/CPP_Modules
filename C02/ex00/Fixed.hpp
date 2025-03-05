/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 10:43:23 by abamksa           #+#    #+#             */
/*   Updated: 2025/02/21 08:30:12 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
	private:
		int _fixedPointValue;
		static const int _fractionalBits = 8;
	public:
		Fixed();
		Fixed( Fixed const & src );
		~Fixed();
		Fixed& operator=( Fixed const & newFixed );
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif
