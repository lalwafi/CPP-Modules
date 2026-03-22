/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 22:42:04 by lalwafi           #+#    #+#             */
/*   Updated: 2026/03/23 02:34:21 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av) 
{
	if (ac > 2)
	{
		try
		{
			PmergeMe	merge(av);
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		return (0);
	}
	std::cout << "Not enough arguments." << std::endl;
	return (1);
}