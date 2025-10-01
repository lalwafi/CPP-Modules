/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 00:00:01 by lalwafi           #+#    #+#             */
/*   Updated: 2025/10/01 20:46:28 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : 
AForm("Presidential-Pardon-Form", 25, 5) , _target("[REDACTED]") {
	std::cout << "PresidentialPardonForm default constructer called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : 
AForm("Presidential-Pardon-Form", 25, 5) , _target(target) {
	std::cout << "PresidentialPardonForm named constructer called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : 
AForm(copy) , _target(copy.getTarget()) {
	std::cout << "PresidentialPardonForm copy constructer called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &b) {
	std::cout << "PresidentialPardonForm = operator called" << std::endl;
	this->_target = b._target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
} 

const std::string	PresidentialPardonForm::getTarget() const {
	return(this->_target);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (this->getSigned() == false)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->getGradeToExec())
		throw AForm::GradeTooLowException();
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
