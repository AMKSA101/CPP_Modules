/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 12:52:51 by user              #+#    #+#             */
/*   Updated: 2025/08/19 16:33:29 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SPAN_HPP__
#define __SPAN_HPP__

# include <iostream>
# include <stdexcept>
# include <algorithm>
# include <iterator>
# include <vector>

class Span {
	private:
		std::vector<int> vect;
		size_t N;
	public:
		Span(unsigned int d);
		Span(const Span& other);
		~Span();
		
		Span& operator=(const Span& other);
		void addNumber(int nb);
		int shortestSpan();
		int longestSpan();
		
		template <typename Iterator>
		void addRange(Iterator begin, Iterator end) {
			size_t count = std::distance(begin, end);

			if (vect.size() + count > N)
				throw std::length_error("The size exceedes the max number!!");
			
			std::copy(begin, end, std::back_inserter(vect));
		}
};

#endif
