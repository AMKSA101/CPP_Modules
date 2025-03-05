/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 10:27:19 by abamksa           #+#    #+#             */
/*   Updated: 2025/03/03 14:02:24 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {
	private:
		std::string _name;
		AMateria *_materias[4];
		AMateria *_savedMateria[4];
	public:
		Character(std::string name);
		Character(const Character &other);
		Character &operator=(const Character &other);
		virtual ~Character();
		virtual std::string const &getName() const;
		virtual void equip(AMateria *m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter &target);
};

#endif
