/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 14:22:40 by lalwafi           #+#    #+#             */
/*   Updated: 2025/12/10 15:50:22 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
	Span test(5);
	try
	{
		test.addNumber(1);
		test.addNumber(14);
		test.addNumber(50);
		test.addNumber(20);
		test.addNumber(-3);
		std::cout << "Shortest span : " << test.shortestSpan() << std::endl;
		std::cout << "Longest span  : " << test.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Span big(10000);
		std::vector<int> vec;
		for (int i = 0; i < 10000; i++)
			vec.push_back(i);
		
		big.addAlotOfNumbers(vec.begin(), vec.end());
		std::cout << "Shortest span : " << big.shortestSpan() << std::endl;
		std::cout << "Longest span  : " << big.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}