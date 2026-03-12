/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 01:52:46 by lalwafi           #+#    #+#             */
/*   Updated: 2026/03/11 03:01:03 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		try
		{
			RPN meow;
			meow.execute(av[1]);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl; // check if this is valid, idk if its meant to be << '\n' or nah
		}
		return (0);
	}
	std::cout << "Error" << std::endl;
	return (1); 
}