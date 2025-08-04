/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 23:41:31 by lalwafi           #+#    #+#             */
/*   Updated: 2025/07/22 04:23:34 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const std::string name) : WrongAnimal(name) {
	std::cout << "WrongCat named constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)  : WrongAnimal(copy) {
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}

void	WrongCat::makeSound() const {
	std::cout << "Wrong cat make sound called" << std::endl;
	std::cout << "** Wrong cat noises ** /ᐠ - ˕ -マ" << std::endl;
}
