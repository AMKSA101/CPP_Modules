/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 11:03:58 by user              #+#    #+#             */
/*   Updated: 2025/08/23 18:22:25 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(const RPN& other) : rpn(other.rpn) {}

RPN& RPN::operator=(const RPN& other) {
	if(this != &other)
		rpn = other.rpn;
	return *this;
}

bool RPN::isValidOperator(char c) {
	if (c != '+' && c != '-' && c != '/' && c != '*')
		return false;
	return true;
}

void RPN::calculate(char op) {
	if (rpn.empty())
		throw std::runtime_error("Error: stack is empty and/or not equiped properly!");
	int l = rpn.top();
	rpn.pop();
	if (rpn.empty())
		throw std::runtime_error("Error: stack is empty and/or not equiped properly!");
	int f = rpn.top();
	rpn.pop();
	if (op == '*')
		rpn.push(f * l);
	else if (op == '/') {
		if (l == 0)
			throw std::runtime_error("Error: Division by zero!");
		rpn.push(f / l);
	}
	else if (op == '+')
		rpn.push(f + l);
	else
		rpn.push(f - l);
}

int RPN::rpnCalculation(std::string& input) {
	std::istringstream iss(input);
	std::string token;
	
	try {
		while (iss >> token) {
			if (token.length() > 1)
				throw std::invalid_argument("Error: Invalid argument!");
			if (token[0] >= '0' && token[0] <= '9') {
				int num = token[0] - '0';
				rpn.push(num);
			}
			else if (isValidOperator(token[0])) {
				calculate(token[0]);
			}
			else
				throw std::invalid_argument("Error: Invalid argument!!");
		}
		
		if (rpn.size() != 1)
			throw std::invalid_argument("Error: Invalid argument!!!");
		else
			return rpn.top();
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
		return -1;
	}
}
