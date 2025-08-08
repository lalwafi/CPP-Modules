/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 20:17:42 by lalwafi           #+#    #+#             */
/*   Updated: 2025/07/23 03:59:35 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "Cat default constructor called" << std::endl;
	this->_brain = new Brain("mmm treat");
	this->_type = "Cat";
}

Cat::Cat(const std::string name) : Animal(name) {
	std::cout << "Cat named constructor called" << std::endl;
	this->_brain = new Brain("mmm treat");
}

Cat::Cat(const Cat &copy) : Animal(copy) {
	std::cout << "Cat copy constructor called" << std::endl;
	this->_brain = new Brain(*copy._brain);
}

Cat &Cat::operator=(const Cat &copy) {
	std::cout << "Cat operator = called" << std::endl;
	delete this->_brain;
    this->_brain = new Brain(*copy._brain);
    this->_type = copy._type;
	return (*this);
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
	delete (this->_brain);
}

void	Cat::makeSound() const {
	std::cout << "Cat make sound called" << std::endl;
	std::cout << "Meow ≽^•⩊•^≼ " << std::endl;
}

Brain	*Cat::getBrain() {
	std::cout << "Cat get brain called" << std::endl;
	return (this->_brain);
}