/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 01:00:44 by lalwafi           #+#    #+#             */
/*   Updated: 2026/03/07 04:24:50 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		try
		{
			BitcoinExchange meow;
			// meow.loadDatabase();
			// meow.parse_shit(av[1]);
			if (meow.isValidValue(av[1]))
				std::cout << "true" << std::endl;
			else
				std::cout << "false" << std::endl;

		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
		return 0;
	}
	std::cout << "Error: could not open file." << std::endl;
	return (1);
}
