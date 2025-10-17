/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 00:00:01 by lalwafi           #+#    #+#             */
/*   Updated: 2025/10/17 03:26:41 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : 
AForm("Robotomy-Request-Form", 72, 45) , _target("[REDACTED]") {
	std::cout << "RobotomyRequestForm default constructer called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : 
AForm("Robotomy-Request-Form", 72, 45) , _target(target) {
	std::cout << "RobotomyRequestForm named constructer called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : 
AForm(copy) , _target(copy.getTarget()) {
	std::cout << "RobotomyRequestForm copy constructer called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &b) {
	std::cout << "RobotomyRequestForm = operator called" << std::endl;
	this->_target = b._target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
} 

const std::string	RobotomyRequestForm::getTarget() const {
	return(this->_target);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (this->getSigned() == false)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->getGradeToExec())
		throw AForm::GradeTooLowException();
	std::cout << "** DRILLING NOISES **" << std::endl;
	if (rand() % 2)
		std::cout << this->getTarget() << " has been successfully robotomized." << std::endl;
	else
		std::cout << this->getTarget() << " robotomy has failed" << std::endl;
}
