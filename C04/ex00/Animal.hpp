/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 09:23:55 by abamksa           #+#    #+#             */
/*   Updated: 2025/03/03 11:34:33 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
protected:
	std::string _type;
public:
	Animal();
	Animal(std::string type);
	virtual ~Animal();
	Animal(const Animal &other);
	Animal &operator=(const Animal &other);
	std::string getType() const;
	virtual void makeSound() const;
};

#endif
