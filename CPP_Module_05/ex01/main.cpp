/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 18:48:36 by lalwafi           #+#    #+#             */
/*   Updated: 2025/08/08 19:17:52 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
	std::cout << "----------------- Constructors -----------------" << std::endl;
	Bureaucrat a("Mr. Fluffles", 4);
	Bureaucrat b("b", 150);
	Bureaucrat c("c", 1);
	
	std::cout << "\n-------------- Too high too low --------------" << std::endl;
	try
	{
		Bureaucrat low("low", 0);
	}
	catch (std::exception &error)
	{
		std::cerr << "Exception: " << error.what() << std::endl;
	}
	try
	{
		Bureaucrat high("high", 151);
	}
	catch (std::exception &error)
	{
		std::cerr << "Exception: " << error.what() << std::endl;
	}
	
	std::cout << "\n--------------- announcements ---------------" << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	
	std::cout << "\n---------------- increments ----------------" << std::endl;
	a.incrementGrade();
	std::cout << a << std::endl;
	a.decrementGrade();
	std::cout << a << std::endl;
	
	try {
		b.decrementGrade();
	}
	catch (std::exception &e){
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	std::cout << b << std::endl;

	try {
		c.incrementGrade();
	}
	catch (std::exception &e){
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	std::cout << c << std::endl;

	std::cout << "\n----------------- Destructors -----------------" << std::endl;
}