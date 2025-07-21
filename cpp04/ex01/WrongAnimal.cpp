/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 20:17:42 by lalwafi           #+#    #+#             */
/*   Updated: 2025/07/22 01:33:38 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal default constructor called" << std::endl;
	this->_type = "Wrong animal";
}

WrongAnimal::WrongAnimal(const std::string name) {
	std::cout << "WrongAnimal named constructor called" << std::endl;
	this->_type = name;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	this->_type = copy._type;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy) {
	std::cout << "WrongAnimal operator = called" << std::endl;
	this->_type = copy._type;
	return (*this);
}

std::string	WrongAnimal::getType() const {
	std::cout << "WrongAnimal get type called" << std::endl;
	return (this->_type);
}


void	WrongAnimal::makeSound(void) const {
	std::cout << "Wrong animal make sound called" << std::endl;
	std::cout << "** Wrong Animal Noises **" << std::endl;
}
