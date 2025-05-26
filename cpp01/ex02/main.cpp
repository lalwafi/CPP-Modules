/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 20:27:36 by lalwafi           #+#    #+#             */
/*   Updated: 2025/05/26 17:42:24 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie	*horde_of_zombies;
	int		N = 5;
	
	horde_of_zombies = zombieHorde(N, "bob");
	std::cout << std::endl;
	delete[] horde_of_zombies;
}
