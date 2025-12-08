/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 21:40:00 by lalwafi           #+#    #+#             */
/*   Updated: 2025/12/08 21:52:10 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {
	std::cout << "Span constructor called" << std::endl;
}

Span::Span(unsigned int i) : _max(i) {
	std::cout << "Span constructor called" << std::endl;
}

Span::Span(Span const &copy) : _vector(copy._vector) , _max(copy._max){
	std::cout << "Span copy constructor called" << std::endl;
}

Span &Span::operator=(const Span &s) {
	std::cout << "Span = operator called" << std::endl;
	if (this != &s)
	{
		this->_max = s._max;
		this->_vector = s._vector;
	}
	return (*this);
}

Span::~Span() {
	std::cout << "Span destructor called" << std::endl;
}

void	Span::addNumber(int i) {
	// if (this->_vector.size() == this->_max)
		
}

const char *Span::MaxCapacityReached::what() const throw() {
	return ("Max Capacity reached :(");
}