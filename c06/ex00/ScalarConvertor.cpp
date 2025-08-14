/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvertor.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 12:53:51 by user              #+#    #+#             */
/*   Updated: 2025/06/01 11:08:01 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvertor.hpp"

ScalarConvertor::ScalarConvertor() {}

ScalarConvertor::ScalarConvertor(const ScalarConvertor &src) {
	(void)src;
}

ScalarConvertor &ScalarConvertor::operator=(const ScalarConvertor &scl) {
	(void)scl;
	return *this;
}

ScalarConvertor::~ScalarConvertor() {}

void ScalarConvertor::printChar(char c) {
	///////////////////// To char ///////////////
	if ( c < std::numeric_limits<char>::min() || c > std::numeric_limits<char>::max())
		std::cout << "char: impossible" << std::endl;
	else if (!isprint(c))
		std::cout << "char: Non displayable" <<std::endl;
	else
		std::cout << "char: '" << c << "'" << std::endl;
	//////////////////// To int /////////////////////
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	//////////////////// To float ////////////////////
	std::cout << std::fixed << std::setprecision(1)
				<< "float: " << static_cast<float>(c) << "f" <<std::endl;
	//////////////////// To double ///////////////////
	std::cout << std::fixed << std::setprecision(1)
				<< "double: " << static_cast<double>(c) <<std::endl;
}
void ScalarConvertor::printInt(int i) {
	///////////////////// To char ///////////////
	if (i < std::numeric_limits<char>::min() || i > std::numeric_limits<char>::max())
		std::cout << "char: impossible"<< std::endl;
	else if (!isprint(static_cast<char>(i)))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '"<< static_cast<char>(i)<< "'"<<std::endl;

	//////////////////// To int /////////////////////
	std::cout << "int: " << i << std::endl;

	//////////////////// To float ////////////////////
	std::cout << std::fixed << std::setprecision(1)
				<< "float: " << static_cast<float>(i) << "f" << std::endl;

	//////////////////// To double ///////////////////
	std::cout << std::fixed << std::setprecision(1)
				<< "double: "<< static_cast<double>(i) << std::endl;
}

void ScalarConvertor::printFloat(float f) {
	///////////////////// To char ///////////////
	if (std::isnan(f) || std::isinf(f) 
		|| f < static_cast<float>(std::numeric_limits<char>::min()) 
		|| f > static_cast<float>(std::numeric_limits<char>::max()) || f != truncf(f))
			std::cout << "char: impossible" << std::endl;
	else if (!isprint(static_cast<char>(f)))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(f)<< "'" << std::endl;
	//////////////////// To int /////////////////////
	if (std::isnan(f) || std::isinf(f)
		|| f < static_cast<float>(std::numeric_limits<int>::min())
		|| f > static_cast<float>(std::numeric_limits<int>::max()))
			std::cout << "int: impossible" <<std::endl;
	else
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	//////////////////// To float ////////////////////
	std::cout << std::fixed << std::setprecision(1)
				<< "float: " << f << "f" << std::endl;
	//////////////////// To double ///////////////////
	std::cout << std::fixed << std::setprecision(1)
				<< "double: " << static_cast<double>(f) << std::endl;
}

void ScalarConvertor::printDouble(double d) {
	///////////////////// To char ///////////////
	if (std::isnan(d) || std::isinf(d) 
		|| d < static_cast<double>(std::numeric_limits<char>::min()) 
		|| d > static_cast<double>(std::numeric_limits<char>::max()) || d != trunc(d))
			std::cout << "char: impossible" << std::endl;
	else if (!isprint(static_cast<char>(d)))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(d)<< "'" << std::endl;
	//////////////////// To int /////////////////////
	if (std::isnan(d) || std::isinf(d)
		|| d < static_cast<double>(std::numeric_limits<int>::min())
		|| d > static_cast<double>(std::numeric_limits<int>::max()))
			std::cout << "int: impossible" <<std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	//////////////////// To float ////////////////////
	std::cout << std::fixed << std::setprecision(1)
				<< "float: " << static_cast<float>(d) << "f" << std::endl;
	//////////////////// To double ///////////////////
	std::cout << std::fixed << std::setprecision(1)
				<< "double: " << d << std::endl;
}

void ScalarConvertor::printPseudo(const std::string& literal) {
	///////////////////// To char ///////////////
	std::cout << "char: impossible" << std::endl;

	//////////////////// To int /////////////////////
	std::cout << "int: impossible" << std::endl;

	//////////////////// To float ////////////////////
	if (literal == "nan" || literal == "nanf")
		std::cout << "float: nanf" << std::endl;
	else if (literal == "+inf" || literal == "+inff")
		std::cout << "float: +inff" << std::endl;
	else if (literal == "-inf" || literal == "-inff")
		std::cout << "float: -inff" << std::endl;
	else
		std::cout << "float: " << literal << "f" << std::endl;

	//////////////////// To double ///////////////////
	if (literal == "nan" || literal == "nanf")
		std::cout << "double: nan" << std::endl;
	else if (literal == "+inf" || literal == "+inff")
		std::cout << "double: +inf" << std::endl;
	else if (literal == "-inf" || literal == "-inff")
		std::cout << "double: -inf" << std::endl;
	else
		std::cout << "double: " << literal << std::endl;
}

void ScalarConvertor::convert(const std::string& literal) {
// Check if it's a pseudo-literal
	if (literal == "nan" || literal == "nanf" || 
		literal == "+inf" || literal == "+inff" || 
		literal == "-inf" || literal == "-inff") {
		printPseudo(literal);
		return;
	}

	// Check if it's a char
	if (literal.length() == 1 && !isdigit(literal[0])) {
		printChar(literal[0]);
		return;
	}

	// Check if it's a float
	if (literal.find('f') != std::string::npos && literal[literal.length() - 1] == 'f') {
		std::string fStr = literal.substr(0, literal.length() - 1);
		if (isValidNumber(fStr)) {
			float f = static_cast<float>(std::atof(fStr.c_str()));
			printFloat(f);
			return;
		}
	}

	// Check if it's an integer
	if (isValidInt(literal)) {
		int i = std::atoi(literal.c_str());
		printInt(i);
		return;
	}

	// Try as double
	if (isValidNumber(literal)) {
		double d = std::atof(literal.c_str());
		printDouble(d);
		return;
	}

	// If we got here, the conversion failed - print impossible for all types
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
}

// Add these helper functions to your class implementation
bool ScalarConvertor::isValidInt(const std::string& str) {
	if (str.empty())
		return false;
		
	size_t i = 0;
	if (str[0] == '-' || str[0] == '+')
		i++;
		
	for (; i < str.length(); i++) {
		if (!isdigit(str[i]))
			return false;
	}

	return true;
}

bool ScalarConvertor::isValidNumber(const std::string& str) {
	if (str.empty())
		return false;
		
	size_t i = 0;
	// Check for sign
	if (str[0] == '-' || str[0] == '+')
		i++;
		
	bool hasDigit = false;
	bool hasDecimal = false;

	for (; i < str.length(); i++) {
		if (isdigit(str[i])) {
			hasDigit = true;
		} else if (str[i] == '.' && !hasDecimal) {
			hasDecimal = true;
		} else {
			return false;
		}
	}

	return hasDigit;
}
