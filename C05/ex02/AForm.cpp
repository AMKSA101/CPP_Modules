/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 15:31:37 by abamksa           #+#    #+#             */
/*   Updated: 2025/03/08 15:53:04 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default"), _signed(false), _gradeToSign(150), _gradeToExecute(150) {}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
}
Form::Form(Form const &form) : _name(form._name), _signed(form._signed), _gradeToSign(form._gradeToSign), _gradeToExecute(form._gradeToExecute) {}

Form &Form::operator=(Form const &form) {
	if (this == &form)
		return *this;
	_signed = form._signed;
	return *this;
}

Form::~Form() {}

std::string Form::getName() const {
	return 0;
}

bool Form::getSigned() const {
	return _signed;
}

int Form::getGradeToSign() const {
	return _gradeToSign;
}

int Form::getGradeToExecute() const {
	return _gradeToExecute;
}

void Form::beSigned(Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > _gradeToSign)
		throw Form::GradeTooLowException();
	_signed = true;
}

const char *Form::GradeTooHighException::what() const throw() {
	return "Grade is too high";
}

const char *Form::GradeTooLowException::what() const throw() {
	return "Grade is too low";
}

std::ostream &operator<<(std::ostream &out, Form const &form) {
	out << "Form " << form.getName() << " is ";
	if (form.getSigned())
		out << "signed";
	else
		out << "not signed";
	out << " since it requires grade " << form.getGradeToSign() << " to be signed and grade " << form.getGradeToExecute() << " to be executed";
	return out;
}


