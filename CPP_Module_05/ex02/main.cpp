/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 18:48:36 by lalwafi           #+#    #+#             */
/*   Updated: 2025/10/17 03:24:49 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) {
	srand(time(NULL));
	std::cout << "\n------------------ Constructors ------------------\n" << std::endl;
	Bureaucrat	a("Mr. Cat", 4);
	Bureaucrat	b("Mr. Dog", 138);
	ShrubberyCreationForm	shrub("backyard");
	RobotomyRequestForm		robotomy("Mr. robot");
	PresidentialPardonForm	robert("robert");
	std::cout << "\n------------ Shrubbery Creation Form ------------\n" << std::endl;
	a.executeForm(shrub);
	a.signForm(shrub);
	a.executeForm(shrub);
	b.executeForm(shrub);

	std::cout << "\n------------- Robotomy Request Form -------------\n" << std::endl;
	a.executeForm(robotomy);
	a.signForm(robotomy);
	a.executeForm(robotomy);
	b.executeForm(robotomy);
	
	std::cout << "\n------------ Robotomy Randomness Test ------------\n" << std::endl;
	for (int i = 0; i < 5; i++)
		a.executeForm(robotomy);
	
	std::cout << "\n------------ Presidential Pardon Form ------------\n" << std::endl;
	a.executeForm(robert);
	a.signForm(robert);
	a.executeForm(robert);
	b.executeForm(robert);
	
	std::cout << "\n----------------- Destructors -----------------\n" << std::endl;
}
