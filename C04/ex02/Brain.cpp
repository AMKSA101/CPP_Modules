/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 12:49:20 by abamksa           #+#    #+#             */
/*   Updated: 2025/02/04 12:54:23 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &other) {
	std::cout << "Brain Copy constructor called" << std::endl;
	*this = other;
}

Brain &Brain::operator=(const Brain &other) {
	std::cout << "Brain Assignation operator called" << std::endl;
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = other.ideas[i];
	}
	return *this;
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}
