/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 00:34:52 by lalwafi           #+#    #+#             */
/*   Updated: 2025/07/18 16:59:37 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void) {
	std::cout << "-----------constructors-----------" << std::endl;
    FragTrap noName;
	FragTrap named("kitty");
	FragTrap player(named);
    
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
	player.beRepaired(0);
	player.beRepaired(40);
	
	std::cout << "\n----Attack tests after repair----" << std::endl;
	player.attack("enemy");
	
	// // this is for exhausting FragTrap, its really long so i commented for cleanliness
	// std::cout << "\n--------!!ATTACK TILL EXHAUSTION!!--------" << std::endl;
	// for (int i = 100; i > 0; i--)
	// 	player.attack("enemy");
	
	std::cout << "\n----------High fives guys----------" << std::endl;
	player.highFivesGuys();
	std::cout << "\n-----------destructors-----------" << std::endl;
}