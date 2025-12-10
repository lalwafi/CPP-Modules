/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 21:40:00 by lalwafi           #+#    #+#             */
/*   Updated: 2025/12/10 15:44:43 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _max(0) {}

Span::Span(unsigned int i) : _max(i) {}

Span::Span(Span const &copy) {
	*this = copy;
}

Span &Span::operator=(const Span &s) {
	if (this != &s)
	{
		this->_max = s._max;
		this->_vector = s._vector;
	}
	return (*this);
}

Span::~Span() {
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

void	Span::addAlotOfNumbers(std::vector<int>::iterator start, std::vector<int>::iterator end) {
	unsigned int dist = std::distance(start, end);
	if (dist > this->_max)
		throw std::runtime_error("Not enough space in Span for range");
	this->_vector.insert(this->_vector.end(), start, end);
}