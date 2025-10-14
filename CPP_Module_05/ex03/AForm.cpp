/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 00:43:08 by lalwafi           #+#    #+#             */
/*   Updated: 2025/08/25 20:49:28 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("[[REDACTED]"), _signed(false), _gradeToSign(150), _gradeToExec(150) {
	std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm(const std::string name, const int gradetosign, const int gradetoexec) \
	: _name(name), _signed(false), _gradeToSign(gradetosign), _gradeToExec(gradetoexec) {
	std::cout << "AForm custom constructor called" << std::endl;
	if (gradetosign > 150 || gradetoexec > 150)
	{
		throw GradeTooLowException();
	}
	else if (gradetosign < 1 || gradetoexec < 1)
	{
		throw GradeTooHighException();
	}
}

AForm::AForm(const AForm &copy) : _name(copy._name), _signed(copy._signed), \
	_gradeToSign(copy._gradeToSign), _gradeToExec(copy._gradeToExec) {
	std::cout << "AForm copy constructor called" << std::endl;
} 

AForm &AForm::operator=(const AForm &b) {
	std::cout << "AForm = operator called" << std::endl;
	this->_signed = b._signed;
	return (*this);
}

AForm::~AForm() {
	std::cout << "AForm deconstructor called" << std::endl;
}

const std::string	AForm::getName() const { return (this->_name); }

bool	AForm::getSigned() const {
	return (this->_signed);
}

int	AForm::getGradeToSign() const {
	return (this->_gradeToSign);
}

int	AForm::getGradeToExec() const {
	return (this->_gradeToExec);
}

void	AForm::beSigned(const Bureaucrat &b) {
	if (b.getGrade() > this->_gradeToSign)
		throw GradeTooLowException();
	this->_signed = true;
}

const char	*AForm::GradeTooHighException::what() const throw() {
	return ("Grade is too high!");
}

const char	*AForm::GradeTooLowException::what() const throw() {
	return ("Grade is too low!");
}

const char	*AForm::FormNotSignedException::what() const throw() {
	return ("Form is not signed!");
}

std::ostream &operator<<(std::ostream &os, const AForm &f) {
	os << f.getName() << ":" << std::endl;
	os << "    Signed          : " << std::boolalpha <<  f.getSigned() << std::endl;
	os << "    Grade to sign   : " << f.getGradeToSign() << std::endl;
	os << "    Grade to execute: " << f.getGradeToExec() << std::endl;
	return (os);
}
