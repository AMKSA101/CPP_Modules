/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 09:04:06 by abamksa           #+#    #+#             */
/*   Updated: 2024/12/19 09:07:40 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::addContact(const Contact& newContact) {
	if (count < MAX_CONTACTS) {
		contacts[(head + count) % MAX_CONTACTS] = newContact;
		count++;
	} else {
		head = (head + 1) % MAX_CONTACTS;
		contacts[head] = newContact;
	}
}

void PhoneBook::displayAllContacts() const {
	if (count == 0) {
		std::cout << "Phone book is empty." << std::endl;
		return;
	}
	std::cout << std::setw(10) << std::right << "index" << "|"
				<< std::setw(10) << std::right << "first name" << "|"
				<< std::setw(10) << std::right << "last name" << "|"
				<< std::setw(10) << std::right << "nickname" << std::endl;
	for (int i = 0; i < count; ++i) {
		int index = (head + i) % MAX_CONTACTS;
		std::string fname = contacts[index].firstName;
		std::string lname = contacts[index].lastName;
		std::string nick = contacts[index].nickname;
		if (fname.length() > 10) fname = fname.substr(0, 9) + ".";
		if (lname.length() > 10) lname = lname.substr(0, 9) + ".";
		if (nick.length() > 10) nick = nick.substr(0, 9) + ".";
		std::cout << std::setw(10) << std::right << i << "|"
					<< std::setw(10) << std::right << fname << "|"
					<< std::setw(10) << std::right << lname << "|"
					<< std::setw(10) << std::right << nick << std::endl;
	}
}

void PhoneBook::searchContact(int index) const {
	if (index < 0 || index >= count) {
		std::cout << "Invalid contact index." << std::endl;
		return;
	}
	contacts[(head + index) % MAX_CONTACTS].displayFull();
}
