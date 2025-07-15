/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 00:34:52 by lalwafi           #+#    #+#             */
/*   Updated: 2025/07/15 08:34:29 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void) {
    ScavTrap noName;
	ScavTrap named("kitty");
	ScavTrap player(named);
    
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
	
	player.attack("enemy");
	player.attack("enemy");
	player.attack("enemy");
	player.attack("enemy");
	player.attack("enemy");
	
	player.guardGate();
}