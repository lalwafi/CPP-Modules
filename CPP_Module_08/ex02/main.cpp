/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 15:12:41 by lalwafi           #+#    #+#             */
/*   Updated: 2025/12/11 17:14:38 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main() {
	MutantStack<int> mstack;
	
	mstack.push(1); // pushes to top of stack
	mstack.push(2);
	mstack.push(3);
	std::cout << "Mstack top : " << mstack.top() << std::endl; // shows top of stack
	mstack.pop();
	std::cout << "Mstack top after pop : " << mstack.top() << std::endl;
	std::cout << "Mstack size : " << mstack.size() << std::endl; // shows size of stack
	
	mstack.push(10);
	mstack.push(20);
	mstack.push(30);
	mstack.push(40);
	mstack.push(50);
	mstack.push(60);
	mstack.push(70);
	mstack.push(80);
	
	std::cout << "Iteration of stack : ";
	for (MutantStack<int>::iterator i = mstack.begin(); i != mstack.end(); i++)
		std::cout << *i << " ";
	std::cout << std::endl;
	return (0);
}


//////////////////// PDF main
// int main()
// {
// 	MutantStack<int> mstack;
	
// 	mstack.push(5);
// 	mstack.push(17);
// 	std::cout << mstack.top() << std::endl;
// 	mstack.pop();
// 	std::cout << mstack.size() << std::endl;
// 	mstack.push(3);
// 	mstack.push(5);
// 	mstack.push(737);
// 	//[...]
// 	mstack.push(0);
// 	MutantStack<int>::iterator it = mstack.begin();
// 	MutantStack<int>::iterator ite = mstack.end();
// 	++it;
// 	--it;
// 	while (it != ite)
// 	{
// 		std::cout << *it << std::endl;
// 		++it;
// 	}
// 	std::stack<int> s(mstack);
// 	return 0;
// }
