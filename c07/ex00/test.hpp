/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 11:52:52 by user              #+#    #+#             */
/*   Updated: 2025/08/14 13:04:56 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __TEST_HPP__
#define __TEST_HPP__

#include <iostream>
#include <string>

template <typename T>
void swap(T& v1, T& v2) {
	T tmp = v1;
	v1 = v2;
	v2 = tmp;
}

template <typename T>
const T& min(const T& v1, const T& v2) {
	return ((v1 < v2) ? v1 : v2);
}

template <typename T>
const T& max(const T& v1, const T& v2) {
	return ((v1 > v2) ? v1 : v2);
}

#endif
