/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 18:48:36 by lalwafi           #+#    #+#             */
/*   Updated: 2025/10/13 19:43:38 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

// int main(void) {
// 	std::cout << "\n------------------ Constructors ------------------\n" << std::endl;
// 	Bureaucrat	a("Mr. Cat", 4);
// 	Bureaucrat	b("Mr. Dog", 138);
// 	ShrubberyCreationForm	shrub("backyard");
// 	RobotomyRequestForm		robotomy("Mr. robot");
// 	PresidentialPardonForm	robert("robert");
// 	std::cout << "\n------------ Shrubbery Creation Form ------------\n" << std::endl;
// 	a.executeForm(shrub);
// 	a.signForm(shrub);
// 	a.executeForm(shrub);
// 	b.executeForm(shrub);

// 	std::cout << "\n------------- Robotomy Request Form -------------\n" << std::endl;
// 	a.executeForm(robotomy);
// 	a.signForm(robotomy);
// 	a.executeForm(robotomy);
// 	b.executeForm(robotomy);
	
// 	std::cout << "\n------------ Presidential Pardon Form ------------\n" << std::endl;
// 	a.executeForm(robert);
// 	a.signForm(robert);
// 	a.executeForm(robert);
// 	b.executeForm(robert);
	
// 	std::cout << "\n----------------- Destructors -----------------\n" << std::endl;
// }

#include <unistd.h>

int main()
{
	srand(time(NULL));
	Bureaucrat john("John", 1);
	RobotomyRequestForm form("Bender");
	john.signForm(form);
	for (size_t i = 0; i < 10; i++)
	{
		john.executeForm(form);
	}
	
}