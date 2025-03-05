/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 09:32:49 by abamksa           #+#    #+#             */
/*   Updated: 2025/03/02 11:31:01 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << std::endl << "------------- Right Animal -------------" << std::endl;
	
	const Animal* meta = new Animal();
	const Animal* beta = new Dog();
	const Animal* theta = new Cat();
	
	std::cout<< meta->getType() << " " << std::endl;
	std::cout << beta->getType() << " " << std::endl;
	std::cout << theta->getType() << " " << std::endl;
	theta->makeSound();
	beta->makeSound();
	meta->makeSound();

	delete theta;
	delete beta;
	delete meta;
	
	std::cout << std::endl << "------------- Wrong Animal -------------" << std::endl;

	const WrongAnimal *wronganimal = new WrongAnimal();
	const WrongAnimal *wrongCat = new WrongCat();

	std::cout << wronganimal->getType() << " " << std::endl;
	std::cout << wrongCat->getType() << " " << std::endl;
	wrongCat->makeSound();
	wronganimal->makeSound();

	delete wrongCat;
	delete wronganimal;
	return 0;
}
