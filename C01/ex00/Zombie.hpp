/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 10:15:00 by abamksa           #+#    #+#             */
/*   Updated: 2025/01/23 10:34:27 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <cstring>

class Zombie{
	private:
		std::string name;
	public:
		Zombie(std::string name);
		~Zombie();
		void announce(void);
		Zombie* newZombie(std::string name);
		void randomChump( std::string name );
};

Zombie* newZombie(std::string name);
void randomChump( std::string name );


#endif
