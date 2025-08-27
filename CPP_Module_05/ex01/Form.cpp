/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 00:43:08 by lalwafi           #+#    #+#             */
/*   Updated: 2025/08/27 18:56:28 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("[[REDACTED]"), _signed(false), _gradeToSign(150), _gradeToExec(150) {
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(const std::string name, const int gradetosign, const int gradetoexec) \
	: _name(name), _signed(false), _gradeToSign(gradetosign), _gradeToExec(gradetoexec) {
	std::cout << "Form custom constructor called" << std::endl;
	if (gradetosign > 150 || gradetoexec > 150)
	{
		throw GradeTooLowException();
	}
	else if (gradetosign < 1 || gradetoexec < 1)
	{
		throw GradeTooHighException();
	}
}

Form::Form(const Form &copy) : _name(copy._name), _signed(copy._signed), \
	_gradeToSign(copy._gradeToSign), _gradeToExec(copy._gradeToExec) {
	std::cout << "Form copy constructor called" << std::endl;
} 

Form &Form::operator=(const Form &b) {
	std::cout << "Form = operator called" << std::endl;
	this->_signed = b._signed;
	return (*this);
}

Form::~Form() {
	std::cout << "Form deconstructor called" << std::endl;
}

const std::string	Form::getName() const {
	return (this->_name);
}

bool	Form::getSigned() const {
	return (this->_signed);
}

int	Form::getGradeToSign() const {
	return (this->_gradeToSign);
}

int	Form::getGradeToExec() const {
	return (this->_gradeToExec);
}

void	Form::signIt(const Bureaucrat &b) {
	if (b.getGrade() > this->_gradeToSign)
		throw GradeTooLowException();
	this->_signed = true;
}

const char	*Form::GradeTooHighException::what() const throw() {
	return ("Grade is too high!");
}

const char	*Form::GradeTooLowException::what() const throw() {
	return ("Grade is too low!");
}

std::ostream &operator<<(std::ostream &os, const Form &f) {
	os << f.getName() << ":" << std::endl;
	os << "    Signed          : " << std::boolalpha <<  f.getSigned() << std::endl;
	os << "    Grade to sign   : " << f.getGradeToSign() << std::endl;
	os << "    Grade to execute: " << f.getGradeToExec() << std::endl;
	return (os);
}
