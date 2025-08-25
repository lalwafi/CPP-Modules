/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 00:00:01 by lalwafi           #+#    #+#             */
/*   Updated: 2025/08/26 01:56:58 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : 
AForm("Shrubbery-Creation-Form", 145, 137) , _target("[REDACTED]") {
	std::cout << "ShrubberyCreationForm default constructer called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : 
AForm("Shrubbery-Creation-Form", 145, 137) , _target(target) {
	std::cout << "ShrubberyCreationForm named constructer called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : 
AForm(copy) , _target(copy.getTarget()) {
	std::cout << "ShrubberyCreationForm copy constructer called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
} 

const std::string	ShrubberyCreationForm::getTarget() const {
	return(this->_target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (this->getSigned() == false)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->getGradeToExec())
		throw AForm::GradeTooLowException();
	std::ofstream file((this->getTarget() + "_shrubbery").c_str());
	if (!file)
		throw std::runtime_error("Failed to open file");
	
	file <<
	"     /\\          (_)          /\\\n"
	"    /  \\        (   )        /  \\\n"
	"   /++++\\        | |        /++++\\\n"
	"  /  ++  \\       | |       /  ++  \\\n"
	" /++++++++\\     /   \\     /++++++++\\\n"
	"     ||         |   |         ||\n"
	"     ||         |   |         ||\n"
	"   ~~~~~~      ~~~~~~~      ~~~~~~\n"
	"   .-''-.___.-''-._.-''-.___.-''-._\n"
	"  (   o  )    (   o   )    (  o   )\n"
	"   `-._.-'     `-._.-'      `-._.-'\n";
	file.close();
}
