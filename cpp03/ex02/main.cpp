/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 00:34:52 by lalwafi           #+#    #+#             */
/*   Updated: 2025/07/15 08:47:51 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void) {
    FragTrap noName;
	FragTrap named("kitty");
	FragTrap player(named);
    
	player.attack("enemy");
	player.attack("enemy");
	player.attack("enemy");
	player.attack("enemy");
	player.attack("enemy");
	player.attack("enemy");

	player.takeDamage(2);
	player.takeDamage(0);
	player.takeDamage(50);
	player.takeDamage(100);
	player.takeDamage(2);
	
	
	player.beRepaired(0);
	player.beRepaired(40);
	
	// this is for exhausting FragTrap, its really long so i commented for cleanliness
	// for (int i = 100; i > 0; i--)
	// 	player.attack("enemy");
	
	player.highFivesGuys();
}