/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 11:52:52 by user              #+#    #+#             */
/*   Updated: 2025/08/20 10:13:34 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __TEST_HPP__
#define __TEST_HPP__

#include <iostream>
#include <string>

template <typename T>
void swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
const T& min(const T& a, const T& b) {
	return (a < b) ? a : b;
}

template <typename T>
const T& max(const T& a, const T& b) {
	return (a > b) ? a : b;
}

#endif
