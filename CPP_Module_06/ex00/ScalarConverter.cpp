/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 12:43:34 by lalwafi           #+#    #+#             */
/*   Updated: 2025/10/21 23:21:37 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
	std::cout << "ScalarConverter constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy) {
	std::cout << "ScalarConverter copy constructor called" << std::endl;
	(void)copy;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &s) {
	std::cout << "ScalarConverter = operator called" << std::endl;
	(void)s;
	return (*this);
}

ScalarConverter::~ScalarConverter() {
	std::cout << "ScalarConverter destructor called" << std::endl;
}

void	ScalarConverter::convert(const std::string &literal) {
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
	
	if (literal.length() == 1 && !isdigit(literal[0]))
	{
		char c = literal[0];
		std::cout << "Char: " << c << "\n";
		std::cout << "Int: " << static_cast<int>(c) << "\n";
		std::cout << "Float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f\n"; 
		std::cout << "Double: " << std::fixed << std::setprecision(1) << static_cast<double>(c) << "\n"; 
		return ;
	}
	
	char *end;
	long i = std::strtol(literal.c_str(), &end, 10);
	if (*end == '\0' && i >= INT_MIN && i <= INT_MAX)
	{
		if (i >= 32 && i <= 126)
			std::cout << "Char: " << static_cast<char>(i) << "\n";
		else if ((i >= 0 && i < 32) || i == 127)
			std::cout << "Char: Non Displayable\n";
		else
			std::cout << "Char: Impossible\n";
		std::cout << "Int: " << i << "\n";
		if (i > FLT_MAX || i < -FLT_MAX)
			std::cout << "Float: impossible" << std::endl;
		else
			std::cout << "Float: " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
		std::cout << "Double: " << std::fixed << std::setprecision(1) << static_cast<double>(i) << "\n";
		return ;
	}

	double j = std::strtod(literal.c_str(), &end);
	if (*end == 'f' && *(end + 1) == '\0')
	{
		float f = static_cast<float>(j);
		if (f >= 32 && f <= 126)
			std::cout << "Char: " << static_cast<char>(f) << "\n";
		else if ((f >= 0 && f < 32) || f == 127)
			std::cout << "Char: Non Displayable\n";
		else
			std::cout << "Char: Impossible\n";
		if (f > INT_MAX || f < INT_MIN)
			std::cout << "Int: Impossible\n";
		else
			std::cout << "Int: " << std::fixed << static_cast<int>(f) << "\n";
		if (f > FLT_MAX || f < FLT_MIN || static_cast<float>(f) != j)
			std::cout << "Float: impossible\n";
		else
			std::cout << "Float: " << std::fixed << std::setprecision(1) << f << "f\n";
		std::cout << "Double: " << static_cast<double>(f) << "\n";
	}
	
	double d = std::strtod(literal.c_str(), &end);
	if (*end == '\0') {
		if (d >= 32 && d <= 126)
			std::cout << "Char: " << static_cast<char>(d) << "\n";
		else if ((d >= 0 && d < 32) || d == 127)
			std::cout << "Char: Non displayable\n";
		else
			std::cout << "Char: Impossible\n";
		if (d > INT_MAX || d < INT_MIN)
			std::cout << "Int: Impossible\n";
		else
			std::cout << "Int: " << std::fixed << std::setprecision(1) << static_cast<int>(d) << "\n";
		if (i > FLT_MAX || i < -FLT_MAX)
			std::cout << "Float: impossible" << std::endl;
		else
			std::cout << "Float: " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
		std::cout << "Double: " << std::fixed << std::setprecision(1) << d << "\n";
		return;
	}
}
