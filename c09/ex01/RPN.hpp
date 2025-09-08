/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 10:23:20 by user              #+#    #+#             */
/*   Updated: 2025/08/23 18:12:50 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __RPN_HPP__
#define __RPN_HPP__

# include <stack>
# include <string>
# include <sstream>
# include <iostream>
# include <algorithm>
# include <stdexcept>

class RPN {
	private:
		std::stack<int> rpn;
		bool isValidOperator(char c);
		void calculate(char op);
		
	public:
		RPN();
		RPN(const RPN& other);
		RPN& operator=(const RPN& other);
		~RPN();
		
		int rpnCalculation(std::string& input);
};

#endif
