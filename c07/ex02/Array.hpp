/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 11:17:08 by user              #+#    #+#             */
/*   Updated: 2025/08/16 11:54:35 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY_HPP__
#define __ARRAY_HPP__

#include <iostream>
#include <string>

template <typename T>
class Array {
	private:
		T* data;
		size_t _size;
	public:
		Array();
		Array(size_t n);
		Array(const Array& other);
		~Array();

		Array& operator=(const Array& other);
		T& operator[](size_t index);
		const T& operator[](size_t index) const;
		size_t size() const;
};

template <typename T>
Array<T>::Array() : data(NULL), _size(0) {}

template <typename T>
Array<T>::Array(size_t n) : _size(n) {
	data = new T[n];
}

template <typename T>
Array<T>::Array(const Array& other) : _size(other._size) {
	if (_size > 0) {
		data = new T[_size];
		for (size_t i = 0; i < _size; i++) {
			data[i] = other.data[i];
		}
	}
	else
		data = NULL;
}

template <typename T>
Array<T>::~Array() {
	delete[] data;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other) {
	if (this != &other) {
		delete[] data;
		_size = other._size;
		if (_size > 0) {
			data = new T[_size];
			for (size_t i = 0; i < _size; i++) {
				data[i] = other.data[i];
			}
		}
		else
			data = NULL;
		}
	return *this;
}

template <typename T>
T& Array<T>::operator[](size_t index) {
	if (index >= _size)
		throw std::exception();

	return data[index];
}

template <typename T>
const T& Array<T>::operator[](size_t index) const{
	if (index >= _size)
		throw std::exception();

	return data[index];
}

template <typename T>
size_t Array<T>::size() const {
	return _size;
}

#endif
