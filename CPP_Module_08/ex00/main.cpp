/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 23:41:35 by lalwafi           #+#    #+#             */
/*   Updated: 2026/03/14 21:37:43 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::cout << "----------- Vector -----------" << std::endl;
	try
	{
		std::vector<int> vec;
		vec.push_back(1);
		vec.push_back(2);
		vec.push_back(3);
		vec.push_back(4);
		vec.push_back(5);
		std::cout << "----- Find in range -----" << std::endl;
		std::cout << easyfind(vec, 5) << std::endl;
		std::cout << "----- Find out of range -----" << std::endl;
		std::cout << easyfind(vec, 6) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << "\n----------- List -----------" << std::endl;
	try
	{
		std::list<int> lst;
		lst.push_back(1);
		lst.push_back(2);
		lst.push_back(3);
		lst.push_back(4);
		lst.push_back(5);
		std::cout << "----- Find in range -----" << std::endl;
		std::cout << easyfind(lst, 5) << std::endl;
		std::cout << "----- Find out of range -----" << std::endl;
		std::cout << easyfind(lst, 6) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n----------- Deque -----------" << std::endl;
	try
	{
		std::deque<int> deq;
		deq.push_back(1);
		deq.push_back(2);
		deq.push_back(3);
		deq.push_back(4);
		deq.push_back(5);
		std::cout << "----- Find in range -----" << std::endl;
		std::cout << easyfind(deq, 5) << std::endl;
		std::cout << "----- Find out of range -----" << std::endl;
		std::cout << easyfind(deq, 6) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n----------- Set -----------" << std::endl;
	try
	{
		std::set<int> s;
		s.insert(1);
		s.insert(2);
		s.insert(3);
		s.insert(4);
		s.insert(5);
		std::cout << "----- Find in range -----" << std::endl;
		std::cout << easyfind(s, 5) << std::endl;
		std::cout << "----- Find out of range -----" << std::endl;
		std::cout << easyfind(s, 6) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n----------- empty containers -----------" << std::endl;
	try
	{
		// empty vector
		std::vector<int> vempty;
		std::cout << easyfind(vempty, 5) << std::endl;
		
		// // empty list
		// std::list<int> lempty;
		// std::cout << easyfind(lempty, 5) << std::endl;
		
		// // empty deque
		// std::deque<int> dempty;
		// std::cout << easyfind(dempty, 5) << std::endl;

		// // empty set
		// std::set<int> sempty;
		// std::cout << easyfind(sempty, 5) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
