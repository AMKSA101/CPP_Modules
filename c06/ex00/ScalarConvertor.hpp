/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvertor.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 11:47:10 by user              #+#    #+#             */
/*   Updated: 2025/06/01 11:08:30 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCALARCONVERTOR_HPP__
# define __SCALARCONVERTOR_HPP__

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip> // For std::fixed, std::setprecision
#include <limits>  // For std::numeric_limits
#include <cmath>   // For isprint, isnan, isinf, trunc
#include <cctype>  // For isprint

class ScalarConvertor {
	private:
		ScalarConvertor();
		ScalarConvertor(const ScalarConvertor &src);
		ScalarConvertor &operator=(const ScalarConvertor &scl);
		~ScalarConvertor();

		static void printChar(char c);
		static void printInt(int n);
		static void printFloat(float f);
		static void printDouble(double d);
		static void printPseudo(const std::string& literal);
		static bool isValidInt(const std::string& str);
		static bool isValidNumber(const std::string& str);
		
	public:
		static void convert(const std::string& literal);
};

#endif
