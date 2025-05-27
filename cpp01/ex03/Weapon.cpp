/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 23:31:46 by lalwafi           #+#    #+#             */
/*   Updated: 2025/05/27 02:23:16 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){}

Weapon::Weapon(std::string weapon)
{
	this->type = weapon;
}

Weapon::~Weapon(){}

std::string	&Weapon::getType()
{
	return (this->type);
}
void	Weapon::setType(std::string type)
{
	this->type = type;
}
