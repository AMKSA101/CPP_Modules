/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 11:27:33 by abamksa           #+#    #+#             */
/*   Updated: 2025/03/08 15:40:55 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat {
	private:
		std::string const _name;
		int _grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &bureaucrat);
		Bureaucrat &operator=(Bureaucrat const &bureaucrat);
		friend std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);
		~Bureaucrat();
		std::string getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();
		void signForm(class Form &form);
		class GradeTooHighException : public std::exception {
			public:
				const char *what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW;
		};
		class GradeTooLowException : public std::exception {
			public:
				const char* what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW;
		};
};

#endif
