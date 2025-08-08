/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 20:17:42 by lalwafi           #+#    #+#             */
/*   Updated: 2025/07/23 04:00:54 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "Dog default constructor called" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(const std::string name) : Animal(name) {
	std::cout << "Dog named constructor called" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(const Dog &copy) : Animal(copy) {
	std::cout << "Dog copy constructor called" << std::endl;
	this->_brain = new Brain(*copy._brain);
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
	delete (this->_brain);
}

Dog &Dog::operator=(const Dog &copy) {
	std::cout << "Dog operator = called" << std::endl;
	delete this->_brain;
    this->_brain = new Brain(*copy._brain);
    this->_type = copy._type;
	return (*this);
}

void	Dog::makeSound() const {
	std::cout << "Dog make sound called" << std::endl;
	std::cout << "Woof ૮ ˶- ﻌ •˶ ა " << std::endl;
}

Brain	*Dog::getBrain() {
	std::cout << "Dog get brain called" << std::endl;
	return (this->_brain);
}