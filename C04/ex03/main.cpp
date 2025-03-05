/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 09:32:49 by abamksa           #+#    #+#             */
/*   Updated: 2025/03/03 14:12:48 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"

int main() {
	std::cout<< "======================================================="<< std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;
	std::cout<< std::endl << "======================================================="<< std::endl;

	Character original("original");
	Character copy(original);
	Character assigned = original;
	copy.equip(new Ice());
	copy.equip(new Cure()); 
	assigned.equip(new Ice());
	assigned.equip(new Cure());
	
	copy.use(0, assigned);
	assigned.use(1, copy);
	assigned.unequip(1);
	assigned.use(1, copy);
	copy.unequip(0);
	std::cout<< std::endl << "======================================================="<< std::endl;

	MateriaSource ms;
	ms.learnMateria(new Ice());
	AMateria* unknown = ms.createMateria("fire");
	if (unknown == NULL) {
		std::cout << "Creating unknown Materia returned nullptr (correct)." << std::endl;
	}
	std::cout<< std::endl << "======================================================="<< std::endl;
	return 0;
}
