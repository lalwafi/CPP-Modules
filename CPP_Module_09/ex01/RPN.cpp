/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 01:56:16 by lalwafi           #+#    #+#             */
/*   Updated: 2026/03/13 02:15:59 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN &copy)
{
	this->_stack = copy._stack;
}

RPN	&RPN::operator=(const RPN &rhs)
{
	if (this != &rhs)
		this->_stack = rhs._stack;
	return (*this);
}

RPN::~RPN() {}

void	RPN::execute(std::string input)
{
	if (input.empty() || input.find_first_not_of(" 0123456789+-*/") != std::string::npos)
		throw (std::runtime_error("Error"));
	// std::stringstream ss(input.c_str());
	std::stringstream ss(input);
	std::string	token;
	// int result = 0;
	while (ss >> token)
	{
		// std::cout << token << std::endl;
		if (token.size() > 1)
			throw (std::runtime_error("Error"));
		if (isdigit(token[0]))
			this->_stack.push(token[0] - '0');
		else if (this->_stack.size() >= 2)
		{
			int b = this->_stack.top();
			this->_stack.pop();
			int a = this->_stack.top();
			this->_stack.pop();
			if (token[0] == '+')
				this->_stack.push(a + b);
			else if (token[0] == '-')
				this->_stack.push(a - b);
			else if (token[0] == '*')
				this->_stack.push(a * b);
			else if (token[0] == '/')
			{
				if (b == 0)
					throw (std::runtime_error("Error"));
				this->_stack.push(a / b);
			}
			// std::cout << "result = " << this->_stack.top() << std::endl;
		}
		else
			throw (std::runtime_error("Error"));
	}
	// std::cout << "stack size: " << this->_stack.size() << std::endl;
	// std::cout << "token: \"" << token << "\"" << std::endl;
	if (this->_stack.size() != 1)
		throw (std::runtime_error("Error"));
	std::cout << _stack.top() << std::endl;
}

// else if (!this->_stack.empty)
// 		{
// 			std::cout << "here??" << std::endl;

// 			while (!this->_stack.empty())
// 			{
// 				int a = this->_stack.top();
// 				this->_stack.pop();
// 				int b = this->_stack.top();
// 				this->_stack.pop();
// 				if (token[0] == '+')
// 					result += a + b;
// 				if (token[0] == '-')
// 					result += a - b;
// 				if (token[0] == '*')
// 					result += a * b;
// 				if (token[0] == '/')
// 				{
// 					if (b == 0)
// 						throw (std::runtime_error("Error (0 denominator found)"));
// 					result += a / b;
// 				}
// 			}
// 			std::cout << "result = " << result << std::endl;
// 		}