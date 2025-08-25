/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 21:30:34 by lalwafi           #+#    #+#             */
/*   Updated: 2025/08/26 02:09:28 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("[REDACTED]"), _grade(150) {
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade) {
	std::cout << "Bureaucrat custom constructor called" << std::endl;
	if (grade > 150)
	{
		this->_grade = 150;
		throw GradeTooLowException();
	}
	else if (grade < 1)
	{
		this->_grade = 1;
		throw GradeTooHighException();
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy._name), _grade(copy._grade) {
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat deconstructor called" << std::endl;
}

const std::string Bureaucrat::getName() const{
	return (this->_name);
}

int	Bureaucrat::getGrade() const{
	return (this->_grade);
}

void	Bureaucrat::incrementGrade() {
	std::cout << "Incrementing " << this->_name << std::endl;
	if ((this->_grade - 1) < 1)
		throw GradeTooHighException();
	else
		this->_grade--;
}

void	Bureaucrat::decrementGrade() {
	std::cout << "Decrementing " << this->_name << std::endl;
	if ((this->_grade + 1) > 150)
		throw GradeTooLowException();
	else
		this->_grade++;
}

const char	*Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade is too high!");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade is too low!");
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b) {
	os << b.getName() << ", bureaucrat grade " << b.getGrade();
	return (os);
}

void	Bureaucrat::signForm(AForm &form) {
	if (form.getSigned() == true)
	{
		std::cout << "Form is already signed" << std::endl;
		return ;
	}
	try
	{
		form.signIt(*this);
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->_name << " couldn't sign " << form.getName() << " because " << e.what() << '\n';
	}
}

void	Bureaucrat::executeForm(AForm const & form) const {
	try
	{
		form.execute(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
