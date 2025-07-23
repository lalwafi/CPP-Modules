/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 03:01:21 by lalwafi           #+#    #+#             */
/*   Updated: 2025/07/23 03:30:28 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "idea";
}

Brain::Brain(const std::string idea) {
	std::cout << "Brain custom idea constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = idea;
}

Brain::Brain(const Brain &copy) {
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = copy._ideas[i];
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &copy) {
	std::cout << "Brain operator = called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = copy._ideas[i];
	return (*this);
}

void	Brain::SetIdeas(std::string idea) {
	std::cout << "Brain Set Ideas called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = idea;
}

void	Brain::SetIdea(std::string idea, unsigned int i) {
	std::cout << "Brain Set Idea called" << std::endl;
	this->_ideas[i] = idea;
}

std::string	Brain::GetIdea(unsigned int i) const {
	std::cout << "Brain Get Idea called" << std::endl;
	return (this->_ideas[i]);
}

void	Brain::PrintAllIdeas() const {
	std::cout << "Brain Print All Ideas called" << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << (i + 1) << " - " << this->_ideas[i] << std::endl;
}
