/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 16:24:49 by user              #+#    #+#             */
/*   Updated: 2025/08/20 17:06:20 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MUTANTSTACK_HPP__
#define __MUTANTSTACK_HPP__

# include <iostream>
# include <algorithm>
# include <stack>
# include <deque>

template<typename T>
class MutantStack : public std::deque<T> {
	
	public:
		void push(const T& value) {
			this->push_back(value);
		}
		void pop() {
			this->pop_back();
		}
		T top() {
			return this->back();
		}

		typedef typename std::deque<T>::iterator iterator;
};

#endif
