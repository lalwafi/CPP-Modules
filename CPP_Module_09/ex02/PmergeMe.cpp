/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 22:39:16 by lalwafi           #+#    #+#             */
/*   Updated: 2026/03/23 03:00:29 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {};

PmergeMe::PmergeMe(const PmergeMe &copy)
{
	*this = copy;
}

PmergeMe::PmergeMe(char **av)
{
	if (!parseInput(av))
		throw std::runtime_error("Error: invalid input, should only be positive integers.");
	std::cout << "Before:  ";
	for (size_t i = 1; av[i]; i++)
	{
		this->_vec.push_back(atoi(av[i]));
		this->_deq.push_back(atoi(av[i]));
		std::cout << av[i] << " ";
	}
	std::cout << std::endl;

	clock_t	startV = clock();
	sortVec(this->_vec);
	clock_t endV = clock();

	clock_t	startD = clock();
	sortDeq(this->_deq);
	clock_t endD = clock();
	
	std::cout << "After:   ";
	for (size_t i = 0; i < this->_vec.size(); i++)
		std::cout << this->_vec[i] << " ";
	std::cout << std::endl;

	double vecTime = (double)(endV - startV) / CLOCKS_PER_SEC * 1000000;
	double deqTime = (double)(endD - startD) / CLOCKS_PER_SEC * 1000000;

	std::cout << "Time to process a range of " << this->_vec.size() << " elements with std::vector: " << vecTime << " us" << std::endl;
	std::cout << "Time to process a range of " << this->_deq.size() << " elements with std::deque:  " << deqTime << " us" << std::endl;
}

PmergeMe	&PmergeMe::operator=(const PmergeMe &rhs)
{
	if (this != &rhs)
	{
		this->_vec = rhs._vec;
		this->_deq = rhs._deq;
	}
	return (*this);
}

PmergeMe::~PmergeMe() {}

bool	PmergeMe::parseInput(char **av)
{
	for (size_t i = 1; av[i]; i++)
	{
		std::string str = av[i];
		if (str.empty() || str.find_first_not_of("0123456789") != std::string::npos)
			return (false);
	}
	return true;
}


void	PmergeMe::sortVec(std::vector<int> &vec)
{
	if (vec.size() < 2)
		return ;
	std::vector<int>	left(vec.begin(), vec.begin() + (vec.size() / 2));
	std::vector<int>	right(vec.begin() + (vec.size() / 2), vec.end());
	sortVec(left);
	sortVec(right);

	size_t l = 0, r = 0, v = 0;
	while (l < left.size() && r < right.size())
		vec[v++] = (left[l] < right[r]) ? left[l++] : right[r++];
	while (l < left.size())
		vec[v++] = left[l++];
	while (r < right.size())
		vec[v++] = right[r++];
}

void	PmergeMe::sortDeq(std::deque<int> &deq)
{
	if (deq.size() < 2)
		return ;
	std::vector<int>	left(deq.begin(), deq.begin() + (deq.size() / 2));
	std::vector<int>	right(deq.begin() + (deq.size() / 2), deq.end());
	sortVec(left);
	sortVec(right);

	size_t l = 0, r = 0, v = 0;
	while (l < left.size() && r < right.size())
		deq[v++] = (left[l] < right[r]) ? left[l++] : right[r++];
	while (l < left.size())
		deq[v++] = left[l++];
	while (r < right.size())
		deq[v++] = right[r++];
}

