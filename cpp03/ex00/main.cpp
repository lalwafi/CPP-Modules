/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 00:34:52 by lalwafi           #+#    #+#             */
/*   Updated: 2025/07/18 16:53:08 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
	std::cout << "------------constructors------------" << std::endl;
    ClapTrap noName;
	ClapTrap named("kitty");
	ClapTrap player(named);
    
	std::cout << "\n-----------Attack tests-----------" << std::endl;
	player.attack("enemy");
	player.attack("enemy");
	player.attack("enemy");
	player.attack("enemy");
	player.attack("enemy");
	player.attack("enemy");

	std::cout << "\n---------Take damage tests---------" << std::endl;
	player.takeDamage(2);
	player.takeDamage(0);
	player.takeDamage(5);
	player.takeDamage(10);
	player.takeDamage(2);
	
	
	std::cout << "\n-----------repair tests-----------" << std::endl;
	player.beRepaired(0);
	player.beRepaired(4);
	
	std::cout << "\n----Attack tests till exhaustion----" << std::endl;
	player.attack("enemy");
	player.attack("enemy");
	player.attack("enemy");
	player.attack("enemy");
	player.attack("enemy");
	
	std::cout << "\n------------destructors------------" << std::endl;
}