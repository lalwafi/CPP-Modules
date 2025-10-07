/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 00:36:23 by lalwafi           #+#    #+#             */
/*   Updated: 2025/10/03 21:30:09 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void) {
	std::cout << "----------- string test -----------" << std::endl;
	std::string stringArr[] = {"meow" , "bark" , "tweet"};
	iter(stringArr, 3, printIt);
	
	std::cout << "----------- const string test ------" << std::endl;
    const std::string constStrArr[] = {"const meow", "const bark", "const tweet"};
    iter(constStrArr, 3, printIt);
	
	std::cout << "------------- int test ------------" << std::endl;
	int intArr[] = {1 , 2 , 3 , 4 , 5};
	iter(intArr, 5, printIt);
	
	std::cout << "----------- const int test ---------" << std::endl;
    const int constIntArr[] = {10, 20, 30, 40};
    iter(constIntArr, 4, printIt);
	
	std::cout << "----------- double test -----------" << std::endl;
    double doubleArr[] = {3.14, 2.71, -1.0, 0.0};
    iter(doubleArr, 4, printIt);
}
