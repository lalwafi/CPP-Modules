/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 20:17:42 by lalwafi           #+#    #+#             */
/*   Updated: 2025/07/22 04:26:14 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "Cat default constructor called" << std::endl;
	this->_brain = new Brain();
	this->_type = "Cat";
}

Cat::Cat(const std::string name) : Animal(name) {
	std::cout << "Cat named constructor called" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(const Cat &copy) : Animal(copy) {
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound() const {
	std::cout << "Cat make sound called" << std::endl;
	std::cout << "Meow ≽^•⩊•^≼ " << std::endl;
}
