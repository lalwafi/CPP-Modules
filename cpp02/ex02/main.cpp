/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 03:50:46 by lalwafi           #+#    #+#             */
/*   Updated: 2025/07/04 22:17:41 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed a(5.05f);
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << "increment ++:" << std::endl;
	std::cout << "a   = " << a << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "a   = " << a << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "a   = " << a << std::endl;
	std::cout << "-----------------------" << std::endl;

	std::cout << "increment --:" << std::endl;
	std::cout << "a   = " << a << std::endl;
	std::cout << "--a = " << --a << std::endl;
	std::cout << "a   = " << a << std::endl;
	std::cout << "a-- = " << a-- << std::endl;
	std::cout << "a   = " << a << std::endl;
	std::cout << "-----------------------" << std::endl;
	
	std::cout << "operators:" << std::endl;
	std::cout << "a + b = " << a + b << std::endl;
	std::cout << "a - b = " << a - b << std::endl;
	std::cout << "a * b = " << a * b << std::endl;
	std::cout << "a / b = " << a / b << std::endl;
	std::cout << "-----------------------" << std::endl;

	Fixed c(3.14f);
    Fixed d(2.71f);
    
    std::cout << "min/max with non-const:" << std::endl;
    std::cout << "min(c, d): " << Fixed::min(c, d) << std::endl;
    std::cout << "max(c, d): " << Fixed::max(c, d) << std::endl;
    std::cout << "-----------------------" << std::endl;

    std::cout << "min/max with const:" << std::endl;
    std::cout << "min(a, b): " << Fixed::min(a, b) << std::endl;
    std::cout << "max(a, b): " << Fixed::max(a, b) << std::endl;
    std::cout << "-----------------------" << std::endl;

	return (0);
}

// int main(void)
// {
// 	Fixed a;
// 	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;

// 	std::cout << b << std::endl;

// 	std::cout << Fixed::max( a, b ) << std::endl;

// 	return (0);
// }
