/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 20:17:42 by lalwafi           #+#    #+#             */
/*   Updated: 2025/07/22 04:23:36 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const std::string name) : Animal(name) {
	std::cout << "Dog named constructor called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy) {
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound() const {
	std::cout << "Dog make sound called" << std::endl;
	std::cout << "Woof ૮ ˶- ﻌ •˶ ა " << std::endl;
}
