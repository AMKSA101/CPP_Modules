/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 09:38:51 by abamksa           #+#    #+#             */
/*   Updated: 2025/02/05 09:39:18 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
public:
	Ice();
	Ice(const Ice &other);
	Ice &operator=(const Ice &other);
	virtual ~Ice();
	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif
