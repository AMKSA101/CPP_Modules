/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 09:27:02 by abamksa           #+#    #+#             */
/*   Updated: 2025/02/04 10:28:47 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
public:
	Cat();
	Cat(std::string type);
	Cat(const Cat &other);
	Cat &operator=(const Cat &other);
	virtual ~Cat();
	void makeSound() const;
};

#endif
