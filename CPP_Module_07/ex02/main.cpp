/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 17:41:38 by lalwafi           #+#    #+#             */
/*   Updated: 2025/10/07 18:36:53 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	Array<int> i1;
	Array<int> i2(5);
	
	std::cout << "------------ constructor deep copy tests ------------" << std::endl;
	for(int i = 0; i < 5; i++) //set i2
		i2[i] = i + 1;
	
	std::cout << "i2 :";
	for(int i = 0; i < 5; i++) // print i2
		std::cout << " " << i2[i] << " ";
	std::cout << std::endl;

	// copy and =
	Array<int> i3(i2);
	Array<int> i4(3);
	i4 = i3;

	// change i2 to check if deep copy
	i2[2] = 500;
	
	std::cout << "i2 changed:";
	for(int i = 0; i < 5; i++)
		std::cout << " " << i2[i] << " ";
	std::cout << std::endl;
	std::cout << "i3        :";
	for(int i = 0; i < 5; i++)
		std::cout << " " << i3[i] << " ";
	std::cout << std::endl;
	std::cout << "i4        :";
	for(int i = 0; i < 5; i++)
		std::cout << " " << i4[i] << " ";
	std::cout << std::endl;

	std::cout << "------------ operator [] out of bounds check ------------" << std::endl;
	try
	{
		std::cout << i2[6] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "------------ other types test ------------" << std::endl;
	Array<std::string> s(3);
	
	s[0] = "meow";
	s[1] = "woof";
	s[2] = "bark";
	
	Array<double> d(3);
	
	d[0] = 3.5;
	d[1] = 8.6;
	d[2] = 3.14;
	
	std::cout << "string:";
	for(int i = 0; i < 3; i++)
		std::cout << " " << s[i] << " ";
	std::cout << std::endl;
	
	std::cout << "double:";
	for(int i = 0; i < 3; i++)
		std::cout << " " << d[i] << " ";
	std::cout << std::endl;
	
	std::cout << "--------- operator [] out of bounds for other tyoes ---------" << std::endl;
	try
	{
		std::cout << s[6] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	try
	{
		std::cout << d[6] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "------------ size() test ------------" << std::endl;
	std::cout << "string size: " << s.size() << std::endl;

	std::cout << "------------ desctructors ------------" << std::endl;
}
