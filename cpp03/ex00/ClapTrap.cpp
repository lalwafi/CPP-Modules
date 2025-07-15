/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 23:48:10 by lalwafi           #+#    #+#             */
/*   Updated: 2025/07/15 08:48:49 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "Default constructor called" << std::endl;
	this->_name = "[REDACTED]";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(const std::string name) {
	std::cout << "Named constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &clap) {
	std::cout << "Copy constructor called" << std::endl;
	this->_name = clap._name;
	this->_hitPoints = clap._hitPoints;
	this->_energyPoints = clap._energyPoints;
	this->_attackDamage = clap._attackDamage;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy) {
	std::cout << "operator = called" << std::endl;
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	return (*this);
}

void	ClapTrap::attack(const std::string &target) {
	if (this->_hitPoints == 0)
		std::cout << "ClapTrap " << this->_name << " is dead lmao" << std::endl;
	else if (this->_energyPoints == 0)
		std::cout << "ClapTrap " << this->_name << " is too tired to attack" << std::endl;
	else
	{
		this->_energyPoints--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (amount >= this->_hitPoints && this->_hitPoints > 0)
	{
		this->_hitPoints = 0;
		std::cout << "ClapTrap " << this->_name << " took " << amount << " points of damage and has died!" << std::endl;
	}
	else if (amount > 0  && this->_hitPoints > 0)
	{
		this->_hitPoints -= amount;
		std::cout << "ClapTrap " << this->_name << " took " << amount << " points of damage!" << std::endl;
	}
	else if (amount > 0  && this->_hitPoints == 0)
		std::cout << "Beating a dead body is lowkey sad" << std::endl;
	else 
		std::cout << "Enemy attack has no effect! (tip: attack needs to be greater than 0)" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energyPoints == 0)
		std::cout << "ClapTrap " << this->_name << " has no energy left to heal!" << std::endl;
	else if (amount > 0)
	{
		if (amount > 10)
			amount = 10;
		this->_hitPoints += amount;
		if (this->_hitPoints > 10)
			this->_hitPoints = 10;
		std::cout << "ClapTrap " << this->_name << " has healed by " << amount << " points!" << std::endl;
	}
	else
		std::cout << "Healing failed!" << std::endl;
}
