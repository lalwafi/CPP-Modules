/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 18:48:36 by lalwafi           #+#    #+#             */
/*   Updated: 2025/10/17 03:31:04 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void) {
	srand(time(NULL));
	std::cout << "\n-------------Shrubbery Intern Test -------------\n" << std::endl;
	try
	{
		const Intern	bob;
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
		AForm	*robot = bob.makeForm("robotomy request", "bob");
		std::cout << *robot;
		try
		{
			Bureaucrat	a("boss", 4);
			a.executeForm(*robot);
			a.signForm(*robot);
			a.executeForm(*robot);
			for (int i = 0; i < 5; i++)
				a.executeForm(*robot);
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
		delete robot;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n-------------Presidential Intern Test -------------\n" << std::endl;
	try
	{
		Intern	bob;
		AForm	*pres = bob.makeForm("presidential pardon", "bob");
		std::cout << *pres;
		try
		{
			Bureaucrat	a("boss", 4);
			a.executeForm(*pres);
			a.signForm(*pres);
			a.executeForm(*pres);
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
		delete pres;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}
