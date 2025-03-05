/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 09:02:46 by abamksa           #+#    #+#             */
/*   Updated: 2025/02/13 12:33:32 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <cctype>
# include <string>
# include <cstring>
# include <iomanip>
# include <iostream>
# include <algorithm>
# include <sstream>
# include "AnsiEscCodes.h"

class Contact {
public:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;

	Contact() : firstName(""), lastName(""), nickname(""), phoneNumber(""), darkestSecret("") {}
	void display() const;
	void displayFull() const;
};

#endif
