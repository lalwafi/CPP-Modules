/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 18:48:36 by lalwafi           #+#    #+#             */
/*   Updated: 2025/08/27 18:54:47 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
	std::cout << "----------------- Constructors -----------------" << std::endl;
	Bureaucrat	a("Mr. Cat", 4);
	Bureaucrat	b("Mr. Dog", 50);
	Form		form("Form-105", 5, 5);
	
	std::cout << "----------------- Form tests -----------------" << std::endl;
	std::cout << form << std::endl;
	try
	{
		a.signForm(form);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << "\n";
	}
	
	std::cout << form << std::endl;
	try
	{
		b.signForm(form);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << "\n";
	}
	Form	form2("Form-150", 5, 5);
	try
	{
		b.signForm(form2);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << "\n";
	}
	
	std::cout << "\n----------------- Destructors -----------------" << std::endl;
}
