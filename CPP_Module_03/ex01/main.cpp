/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 00:34:52 by lalwafi           #+#    #+#             */
/*   Updated: 2025/07/18 16:51:16 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void) {
	std::cout << "-----------constructors-----------" << std::endl;
    ScavTrap noName;
	ScavTrap named("kitty");
	ScavTrap player(named);
    
	std::cout << "\n----------Attack tests----------" << std::endl;
	player.attack("enemy");
	player.attack("enemy");
	player.attack("enemy");
	player.attack("enemy");
	player.attack("enemy");
	player.attack("enemy");

	std::cout << "\n--------Take damage tests--------" << std::endl;
	player.takeDamage(2);
	player.takeDamage(0);
	player.takeDamage(50);
	player.takeDamage(100);
	player.takeDamage(2);
	
	std::cout << "\n-------Attack tests no hp-------" << std::endl;
	player.attack("enemy");
	
	std::cout << "\n----------repair tests----------" << std::endl;
	player.beRepaired(0);
	player.beRepaired(40);
	
	std::cout << "\n----Attack tests after repair----" << std::endl;
	player.attack("enemy");
	
	std::cout << "\n-----------Guard gate-----------" << std::endl;
	player.guardGate();
	std::cout << "\n-----------destructors-----------" << std::endl;
}