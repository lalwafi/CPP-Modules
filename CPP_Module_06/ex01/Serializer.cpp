/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 22:29:02 by lalwafi           #+#    #+#             */
/*   Updated: 2025/09/10 22:52:52 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {
	std::cout << "Serializer constructor called" << std::endl;
}

Serializer::Serializer(const Serializer &copy) {
	std::cout << "Serializer copy constructor called" << std::endl;
	*this = copy;
}

Serializer &Serializer::operator=(const Serializer &s) {
	std::cout << "Serializer = operator called" << std::endl;
	(void)s;
	return (*this);
}

Serializer::~Serializer() {
	std::cout << "Serializer destructor called" << std::endl;
}

uintptr_t	Serializer::serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*Serializer::deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data *>(raw));
}
