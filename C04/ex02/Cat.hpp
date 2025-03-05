/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 09:27:02 by abamksa           #+#    #+#             */
/*   Updated: 2025/02/04 12:55:10 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
private:
		Brain *_brain;
public:
	Cat();
	Cat(std::string type);
	Cat(const Cat &other);
	Cat &operator=(const Cat &other);
	virtual ~Cat();
	void makeSound() const;
};

#endif
