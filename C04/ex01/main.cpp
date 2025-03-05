/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 09:32:49 by abamksa           #+#    #+#             */
/*   Updated: 2025/03/02 11:56:41 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	int n = 6;
	
	Animal *animls[n];
	for (int i = 0; i < n; i++)
	{
		while (i < n / 2)
		{
			animls[i] = new Dog();
			break;
		}
		while (i >= n / 2)
		{
			animls[i] = new Cat();
			break;
		}
	}
	for (int i = 0; i < n; i++)
	{
		animls[i]->makeSound();
		delete animls[i];
	}
	return 0;
}
