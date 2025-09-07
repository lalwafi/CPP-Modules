/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 12:43:34 by lalwafi           #+#    #+#             */
/*   Updated: 2025/09/08 02:54:28 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
	std::cout << "ScalarConverter constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy) {
	std::cout << "ScalarConverter copy constructor called" << std::endl;
	*this = copy;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &s) {
	std::cout << "ScalarConverter = operator called" << std::endl;
	*this = s;
	return (*this);
}

ScalarConverter::~ScalarConverter() {
	std::cout << "ScalarConverter destructor called" << std::endl;
}

void	ScalarConverter::convert(const std::string &literal) {
	 // 1. Handle special cases (nan, inf, etc.)
    //    -> print directly and return

	if (literal == "nan" || literal == "nanf")
	{
		std::cout << "Char: impossible\nInt: impossible\nFloat: nanf\nDouble: nan" << std::endl;
		return ;
	}
	if (literal == "+inf" || literal == "+inff")
	{
		std::cout << "Char: impossible\nInt: impossible\nFloat: +inff\nDouble: +inf" << std::endl;
		return ;
	}
	if (literal == "-inf" || literal == "-inff")
	{
		std::cout << "Char: impossible\nInt: impossible\nFloat: -inff\nDouble: -inf" << std::endl;
		return ;
	}
	
    // 2. If input is 1 char and not a digit
    //    -> treat as char literal
    //    -> print char, int, float, double
    //    -> return

	if (literal.length() == 1 && !isdigit(literal[0]))
	{
		char c = literal[0];
		std::cout << "Char: " << c << "\n";
		std::cout << "Int: " << static_cast<int>(c) << "\n";
		std::cout << "Float: " << static_cast<float>(c) << ".0f\n"; 
		std::cout << "Double: " << static_cast<double>(c) << ".0\n"; 
		return ;
	}
	
	char *end;
	long i = std::strtol(literal.c_str(), &end, 10);
	if (*end == '\0' && i >= INT_MIN && i <= INT_MAX)
	{
		if (i >= 32 && i <= 126)
			std::cout << "Char: " << static_cast<char>(i) << "\n";
		else
			std::cout << "Char: Non Displayable\n";
		std::cout << "Int: " << i << "\n";
		std::cout << "Float: " << static_cast<float>(i) << ".0f\n"; 
		std::cout << "Double: " << static_cast<double>(i) << ".0\n";
		return ;
	}

	double j = std::strtod(literal.c_str(), &end);
	if (*end == 'f' && *(end + 1) == '\0')
	{
		float f = static_cast<float>(j);
		if (f >= 32 && f <= 126)
			std::cout << "Char: " << static_cast<char>(f) << "\n";
		else
			std::cout << "Char: Non Displayable\n";
		
		 
	}
	
    // 3. Else: parse input as double
    //    -> use strtod to convert string -> double
    //    -> check if conversion failed

    // 4. Print as char
    //    -> if not displayable, say "Non displayable"
    //    -> if out of range, say "impossible"

    // 5. Print as int
    //    -> if out of int range, say "impossible"

    // 6. Print as float
    //    -> always print number with "f" at end

    // 7. Print as double
    //    -> just print number

	
}
