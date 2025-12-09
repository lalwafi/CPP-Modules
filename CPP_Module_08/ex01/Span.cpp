/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 21:40:00 by lalwafi           #+#    #+#             */
/*   Updated: 2025/12/09 14:23:21 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _max(0){
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
	if (this->_vector.size() == this->_max)
		throw std::runtime_error("Max Capacity Reached :(");
	this->_vector.push_back(i);
}

int	Span::shortestSpan() const {
	if (this->_vector.size() <= 1)
		throw std::runtime_error("Container Too Small To Find Span");
	
	std::vector<int> copy = this->_vector;
	std::sort(copy.begin(), copy.end());   // sorts from lowest to highest
	
	int min = copy[1] - copy[0];
	int temp;
	for (size_t i = 2; i < copy.size(); i++)
	{
		temp = copy[i] - copy[i - 1];
		if (temp < min)
			min = temp;
	}
	return (min);
}

int	Span::longestSpan() const {
	if (this->_vector.size() <= 1)
		throw std::runtime_error("Container Too Small To Find Span");
	
	std::vector<int> copy = this->_vector;
	std::sort(copy.begin(), copy.end());   // sorts from lowest to highest
	
	return (copy.back() - copy.front());
}

void	Span::addAlotOfNumbers(int start, int end) {
	for (unsigned int i = this->_max; i >= 0; i--)
		// some way to add that dumb fucking range???? i dont know
}