/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 23:41:31 by lalwafi           #+#    #+#             */
/*   Updated: 2025/07/22 01:34:39 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat default constructor called" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(const std::string name) {
	std::cout << "WrongCat named constructor called" << std::endl;
	this->_type = name;
}

WrongCat::WrongCat(const WrongCat &copy)  : WrongAnimal(copy) {
	std::cout << "WrongCat copy constructor called" << std::endl;
	this->_type = copy._type;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}

void	WrongCat::makeSound() const {
	std::cout << "Wrong cat make sound called" << std::endl;
	std::cout << "** Wrong cat noises ** /ᐠ - ˕ -マ" << std::endl;
}
