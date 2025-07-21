/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 19:34:50 by lalwafi           #+#    #+#             */
/*   Updated: 2025/07/22 01:33:24 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal default constructor called" << std::endl;
	this->_type = "Animal";
}

Animal::Animal(const std::string name) {
	std::cout << "Animal named constructor called" << std::endl;
	this->_type = name;
}

Animal::Animal(const Animal &copy) {
	std::cout << "Animal copy constructor called" << std::endl;
	this->_type = copy._type;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &copy) {
	std::cout << "Animal operator = called" << std::endl;
	this->_type = copy._type;
	return (*this);
}

std::string	Animal::getType() const {
	std::cout << "Animal get type called" << std::endl;
	return (this->_type);
}


void	Animal::makeSound(void) const {
	std::cout << "Animal make sound called" << std::endl;
	std::cout << "** Unknown Animal Noises **" << std::endl;
}
