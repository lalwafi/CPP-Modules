/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 04:48:27 by lalwafi           #+#    #+#             */
/*   Updated: 2025/06/13 05:12:52 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl harl;

	std::cout << "DEBUG:" << std::endl;
	harl.complain("DEBUG");
	std::cout << std::endl;
	
	std::cout << "INFO:" << std::endl;
	harl.complain("INFO");
	std::cout << std::endl;
	
	std::cout << "WARNING:" << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl;
	
	std::cout << "ERROR:" << std::endl;
	harl.complain("ERROR");
	std::cout << std::endl;
	
	std::cout << "random word:" << std::endl;
	harl.complain("no");
	std::cout << std::endl;

	return (0);
}
