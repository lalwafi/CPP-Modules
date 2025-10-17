/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 20:27:36 by lalwafi           #+#    #+#             */
/*   Updated: 2025/10/17 04:02:27 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

int main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;
	
	std::cout << "Memory address of string     : " << &string << std::endl;
	std::cout << "Memory address of stringPTR  : " << stringPTR << std::endl;
	std::cout << "Memory address of stringREF  : " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "Value of string              : " << string << std::endl;
	std::cout << "Value of stringPTR           : " << *stringPTR << std::endl;
	std::cout << "Value of stringREF           : " << stringREF << std::endl;
}
