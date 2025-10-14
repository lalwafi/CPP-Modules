/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 16:35:56 by lalwafi           #+#    #+#             */
/*   Updated: 2025/10/13 20:25:26 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern &copy) {
	std::cout << "Intern copy constructor called" << std::endl;
	*this = copy;
}

Intern	&Intern::operator=(const Intern &i) {
	std::cout << "Intern operator = called" << std::endl;
	(void)i;
	return (*this);
}

Intern::~Intern() {
	std::cout << "Intern destructor called" << std::endl;
}

AForm	*Intern::createShrub(std::string const target) const {
	return (new ShrubberyCreationForm(target));
}

AForm	*Intern::createRobot(std::string const target) const {
	return (new RobotomyRequestForm(target));
}

AForm	*Intern::createPresident(std::string const target) const {
	return (new PresidentialPardonForm(target));
}

AForm	*Intern::makeForm(std::string form, std::string target) const {
	std::string	forms[3] = {"shrubbery form" , "robotomy request" , "presidential pardon"};
	AForm *(Intern::*makeforms[3])(const std::string) const = {
		&Intern::createShrub,
		&Intern::createRobot,
		&Intern::createPresident
	};
	for (int i = 0; i < 3; i++) {
		if (form == forms[i]){
			std::cout << "Intern creates " << form << std::endl;
			return ((this->*makeforms[i])(target));
		}
	}
	throw UnknownFormException();
}

const char	*Intern::UnknownFormException::what() const throw() {
	return ("Intern could not create form.\n");
}
