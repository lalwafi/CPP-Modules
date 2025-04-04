/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 18:50:29 by lalwafi           #+#    #+#             */
/*   Updated: 2025/04/04 19:19:59 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie( std::string name )
{
	return(new Zombie(name));
}

void	randomChump( std::string name )
{
	Zombie	*boo;
	boo = newZombie(name);
	boo->announce();
	delete(boo);
}
