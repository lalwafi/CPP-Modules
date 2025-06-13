/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 04:48:27 by lalwafi           #+#    #+#             */
/*   Updated: 2025/06/13 05:12:02 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void	Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string complain)
{
	std::string	levels[4] = {"DEBUG" , "INFO" , "WARNING" , "ERROR"};
	void	(Harl::*levelFunctions[4])();
	levelFunctions[0] = &Harl::debug;
	levelFunctions[1] = &Harl::info;
	levelFunctions[2] = &Harl::warning;
	levelFunctions[3] = &Harl::error;

	for (int i = 0; i < 4; i++)
	{
		if (levels[i].compare(complain) == 0)
			return ((this->*levelFunctions[i])());
	}
	std::cout << "(somehow Harl has no complaints!!)" << std::endl;
}