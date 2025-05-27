/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 23:50:13 by lalwafi           #+#    #+#             */
/*   Updated: 2025/05/27 02:23:31 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& type)
{
	this->name = name;
	this->weapon = type;
}

HumanA::~HumanA(){}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with their ";
	std::cout << this->weapon.getType() << std::endl;
}
