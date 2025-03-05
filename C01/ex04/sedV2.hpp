/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sedV2.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 12:16:33 by abamksa           #+#    #+#             */
/*   Updated: 2025/02/20 10:33:42 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "AnsiEscCodes.h"

class sedV2{
	private:
		std::string _toReplace;
		std::string _replaceWith;
	public:
		sedV2(std::string toReplace, std::string replaceWith);
		~sedV2();
		void replace(std::string &str);
};
