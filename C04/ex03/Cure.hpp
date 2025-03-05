/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 09:40:45 by abamksa           #+#    #+#             */
/*   Updated: 2025/02/05 09:41:03 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
public:
	Cure();
	Cure(const Cure &other);
	Cure &operator=(const Cure &other);
	virtual ~Cure();
	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif
