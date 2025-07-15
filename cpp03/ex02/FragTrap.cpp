/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 08:03:33 by lalwafi           #+#    #+#             */
/*   Updated: 2025/07/15 08:48:05 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "FragTrap Default constructor called" << std::endl;
	this->_name = "[REDACTED]";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const std::string name) {
	std::cout << "FragTrap Named constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &Frag) : ClapTrap(Frag) {
	std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Destructor called" << std::endl;
}

void	FragTrap::attack(const std::string &target) {
	if (this->_hitPoints == 0)
		std::cout << "FragTrap " << this->_name << " is dead lmao" << std::endl;
	else if (this->_energyPoints == 0)
		std::cout << "FragTrap " << this->_name << " is too tired to attack" << std::endl;
	else
	{
		this->_energyPoints--;
		std::cout << "FragTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << this->_name << " high fives enemies! Everyone looks satisfied" << std::endl;
}
