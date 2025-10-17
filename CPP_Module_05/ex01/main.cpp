/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 18:48:36 by lalwafi           #+#    #+#             */
/*   Updated: 2025/10/17 04:00:03 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
	std::cout << "----------------- Constructors -----------------" << std::endl;
	Bureaucrat	a("Mr. Cat", 4);
	Bureaucrat	b("Mr. Dog", 50);
	Form		form("Form-100", 5, 5);
	
	std::cout << "------------- Form test grade good -------------" << std::endl;
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
	
	std::cout << "-------------- Form test grade bad --------------" << std::endl;
	Form	form1("Form-101", 5, 5);
	try
	{
		b.signForm(form1);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << "\n";
	}
	std::cout << form1 << std::endl;
	
	Form	form2("Form-102", 50, 5);
	try
	{
		b.signForm(form2);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << "\n";
	}
	std::cout << form2 << std::endl;
	
	std::cout << "\n----------------- Destructors -----------------" << std::endl;
}
