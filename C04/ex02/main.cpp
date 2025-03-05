/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 09:32:49 by abamksa           #+#    #+#             */
/*   Updated: 2025/03/02 12:02:14 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	std::cout << std::endl << "------------- Right Animal -------------" << std::endl;
	
	const Animal* beta = new Dog();
	const Animal* theta = new Cat();
	
	std::cout << beta->getType() << " " << std::endl;
	std::cout << theta->getType() << " " << std::endl;
	beta->makeSound();
	theta->makeSound();

	delete theta;
	delete beta;
	return 0;
}
