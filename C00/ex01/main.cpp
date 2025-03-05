/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 11:07:41 by abamksa           #+#    #+#             */
/*   Updated: 2025/02/18 17:55:19 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int ft_add_contact(PhoneBook &phoneBook __attribute_maybe_unused__) {
	Contact contact;
	std::string input;
	bool isValid = true;

	std::cout << DIM<< YELLOW << "Enter first name: "<< RESET;
	while (1) {
		getline(std::cin, input);
		if (!input.empty())
			break;
	}
	for (size_t i = 0; i < input.length(); ++i) {
		if ((!isalpha(input[i]) || isspace(input[i])) && isascii(input[i])) {
			isValid = false;
			break;
		}
	}
	if (!isValid)
		return -1;
	contact.firstName = input;
	std::cout << DIM<< YELLOW << "Enter last name: "<< RESET;
	while (1) {
		getline(std::cin, input);
		if (!input.empty())
			break;
	}
	for (size_t i = 0; i < input.length(); ++i) {
		if ((!isalpha(input[i]) || isspace(input[i])) && isascii(input[i])) {
			isValid = false;
			break;
		}
	}
	if (!isValid)
		return -1;
	contact.lastName = input;
	std::cout << DIM<< YELLOW << "Enter nickname: "<< RESET;
	while (1) {
		getline(std::cin, input);
		if (!input.empty())
			break;
	}
	for (size_t i = 0; i < input.length(); ++i) {
		if ((!isalnum(input[i]) || isspace(input[i])) && isascii(input[i])) {
			isValid = false;
			break;
		}
	}
	if (!isValid)
		return -1;
	contact.nickname = input;
	std::cout << DIM<< YELLOW << "Enter phone number: "<< RESET;
	while (1) {
		getline(std::cin, input);
		if (!input.empty())
			break;
	}
	if (input.length() < 7 || input.length() > 15)
		return -1;
	for (size_t i = 0; i < input.length(); ++i) {
		if (i == 0 && input[i] == '+')
			continue;
		if ((!isdigit(input[i]) || isspace(input[i])) && isascii(input[i])) {
			isValid = false;
			break;
		}
	}
	if (!isValid)
		return -1;
	contact.phoneNumber = input;
	std::cout << DIM<< YELLOW << "Enter darkest secret: "<< RESET;
	while (1) {
		getline(std::cin, input);
		if (!input.empty())
			break;
	}
	for (size_t i = 0; i < input.length(); ++i) {
		if (isascii(input[i]) && !isprint(input[i])) {
			isValid = false;
			break;
		}
	}
	if (!isValid)
		return -1;
	contact.darkestSecret = input;
	phoneBook.addContact(contact);
	return 0;
}

int main() {
	PhoneBook phoneBook;
	char command[25];
	std::string input;

	while (1) {
		std::cout << BOLD<< MAGENTA << "Enter command (ADD, SEARCH, EXIT): " << RESET;
		std::cin >> command;
		if (strcmp(command, "ADD") == 0) {
			if (ft_add_contact(phoneBook) == -1) {
				std::cout << STRIKETHROUGH << BOLD << RED<< "Invalid input." << RESET<< std::endl;
				continue;
			}
		} else if (strcmp(command, "SEARCH") == 0) {
			int index;
			std::cout << DIM<< YELLOW << "Enter contact index: "<< RESET;
			while (1) {
				getline(std::cin, input);
				if (!input.empty())
					break;
			}
			bool isValid = !input.empty();
			for (size_t i = 0; i < input.length(); i++)
			{
				if (!isdigit(input[i]))
				{
					isValid = false;
					break;
				}
			}
			if(isValid)
			{
				std::istringstream(input) >> index;
				phoneBook.displayAllContacts();
				phoneBook.searchContact(index);
			}
			else
				std::cout << STRIKETHROUGH << BOLD << RED<< "Invalid index." << RESET<< std::endl;
		} else if (strcmp(command, "EXIT") == 0) {
			break;
		} else {
			std::cout << STRIKETHROUGH << BOLD << RED<< "Invalid command." << RESET<< std::endl;
		}
	}
	return 0;
}
