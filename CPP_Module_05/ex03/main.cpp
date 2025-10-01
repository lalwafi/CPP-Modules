/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 18:48:36 by lalwafi           #+#    #+#             */
/*   Updated: 2025/10/01 21:11:12 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void) {
	std::cout << "\n-------------Shrubbery Intern Test -------------\n" << std::endl;
	try
	{
		Intern	bob;
		AForm	*shrub = bob.makeForm("shrubbery form", "outdoor");
		std::cout << *shrub;
		try
		{
			Bureaucrat	a("boss", 4);
			a.executeForm(*shrub);
			a.signForm(*shrub);
			a.executeForm(*shrub);
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
		delete shrub;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n-------------Robotomy Intern Test -------------\n" << std::endl;
	try
	{
		Intern	bob;
		AForm	*shrub = bob.makeForm("robotomy request", "bob");
		std::cout << *shrub;
		try
		{
			Bureaucrat	a("boss", 4);
			a.executeForm(*shrub);
			a.signForm(*shrub);
			a.executeForm(*shrub);
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
		delete shrub;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n-------------Presidential Intern Test -------------\n" << std::endl;
	try
	{
		Intern	bob;
		AForm	*shrub = bob.makeForm("presidential pardon", "bob");
		std::cout << *shrub;
		try
		{
			Bureaucrat	a("boss", 4);
			a.executeForm(*shrub);
			a.signForm(*shrub);
			a.executeForm(*shrub);
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
		delete shrub;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}
