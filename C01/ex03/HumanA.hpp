/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 11:29:19 by abamksa           #+#    #+#             */
/*   Updated: 2025/01/23 11:46:46 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA{
	private:
		std::string name;
		Weapon *weapon;
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void attack(void);
};

