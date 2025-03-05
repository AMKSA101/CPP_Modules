/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 11:16:11 by abamksa           #+#    #+#             */
/*   Updated: 2025/01/23 11:17:35 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon{
	private:
		std::string type;
	public:
		Weapon(std::string type);
		~Weapon();
		const std::string &getType(void);
		void setType(std::string type);
};

#endif
