/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 21:16:54 by lalwafi           #+#    #+#             */
/*   Updated: 2025/10/02 00:34:32 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(void)
{
	std::cout << "----------------- int test ---------------------" << std::endl;
	int a = 6;
	int b = 7;

	std::cout << "----- swap -----" << std::endl;
	std::cout << "before swap : a = " << a << " | b = " << b << std::endl;
	::swap(a, b);
	std::cout << "after swap  : a = " << a << " | b = " << b << std::endl;

	std::cout << "------ max ------" << std::endl;
	std::cout << "max : " << ::max(a, b) << std::endl;

	std::cout << "------ min ------" << std::endl;
	std::cout << "min : " << ::min(a, b) << std::endl;
	

	std::cout << "----------------- string test ---------------------" << std::endl;
	std::string c = "string 1";
	std::string d = "string 2";

	std::cout << "----- swap -----" << std::endl;
	std::cout << "before swap : c = " << c << " | d = " << d << std::endl;
	::swap(c, d);
	std::cout << "after swap  : c = " << c << " | d = " << d << std::endl;

	std::cout << "------ max ------" << std::endl;
	std::cout << "max : " << ::max(c, d) << std::endl;

	std::cout << "------ min ------" << std::endl;
	std::cout << "min : " << ::min(c, d) << std::endl;
	

    std::cout << "----------------- double test ---------------------" << std::endl;
    double x = 3.14;
    double y = 2.71;

    std::cout << "----- swap -----" << std::endl;
    std::cout << "before swap : x = " << x << " | y = " << y << std::endl;
    ::swap(x, y);
    std::cout << "after swap  : x = " << x << " | y = " << y << std::endl;

    std::cout << "------ max ------" << std::endl;
    std::cout << "max : " << ::max(x, y) << std::endl;

    std::cout << "------ min ------" << std::endl;
    std::cout << "min : " << ::min(x, y) << std::endl;


	return (0);
}


// //                main from the subject

// int main( void ) {
// 	int a = 2;
// 	int b = 3;
// 	::swap( a, b );
// 	std::cout << "a = " << a << ", b = " << b << std::endl;
// 	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
// 	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
// 	std::string c = "chaine1";
// 	std::string d = "chaine2";
// 	::swap(c, d);
// 	std::cout << "c = " << c << ", d = " << d << std::endl;
// 	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
// 	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
// 	return 0;
// }
