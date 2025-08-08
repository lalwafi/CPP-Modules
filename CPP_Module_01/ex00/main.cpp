/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 20:27:36 by lalwafi           #+#    #+#             */
/*   Updated: 2025/04/04 19:56:43 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie	*new_zombie;
	
	new_zombie = newZombie("bark");
	new_zombie->announce();
	delete(new_zombie);
	randomChump("meow");
}
