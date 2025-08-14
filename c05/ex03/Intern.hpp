/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 15:47:06 by abamksa           #+#    #+#             */
/*   Updated: 2025/05/31 10:06:43 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
	public:
		Intern();
		Intern(Intern const &src);
		Intern &operator=(Intern const &src);
		~Intern();
		AForm *makeForm(std::string formName, std::string target);
		class FormNotFoundException : public std::exception {
			public:
				const char *what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW;
		};
};

#endif
