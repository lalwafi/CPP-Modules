/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 01:17:40 by lalwafi           #+#    #+#             */
/*   Updated: 2025/10/01 18:39:31 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int ac, char **av) {
	if (ac != 2)
	{
		std::cout << "Usage: ./ScalarConverter <(char) / (int) / (float) / (double)>" << std::endl;
		return (1);
	}
	std::cout << "---------------------------------\n	" << av[1] << std::endl;
	ScalarConverter::convert(av[1]);
}