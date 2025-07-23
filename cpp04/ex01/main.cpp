/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 19:56:29 by lalwafi           #+#    #+#             */
/*   Updated: 2025/07/23 04:08:34 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	Cat cat;
	Dog dog;
	
	std::cout << "\n-------- Brain tests CAT -------" << std::endl;
	cat.getBrain()->SetIdeas("hangy");
	cat.getBrain()->SetIdea("MEOW MEOW MEOW!!!!!!", 99);
	std::cout << cat.getBrain()->GetIdea(99) << std::endl;
	// cat.getBrain()->PrintAllIdeas(); // commented for readability
	
	// std::cout << "\n-------- Brain tests DOG -------" << std::endl;
	// dog.getBrain()->SetIdeas("bone");
	// dog.getBrain()->SetIdea("BARK BARK BARK!!!!!!", 99);
	// std::cout << dog.getBrain()->GetIdea(99) << std::endl;
	// // dog.getBrain()->PrintAllIdeas(); // commented for readability

	std::cout << "\n-------- Brain test deep copy (dog) -------" << std::endl;
	Dog dog2;
	dog2 = dog;
	Dog dog3(dog);

	dog2.getBrain()->SetIdea("i am dog 2", 99);
	dog3.getBrain()->SetIdea("i am dog 3", 99);
	std::cout << dog.getBrain()->GetIdea(99) << std::endl;
	std::cout << dog2.getBrain()->GetIdea(99) << std::endl;
	std::cout << dog3.getBrain()->GetIdea(99) << std::endl;
	
	// std::cout << "\n-------- Brain test deep copy (cat) -------" << std::endl;
	// Cat cat2;
	// cat2 = cat;
	// Cat cat3(cat);

	// cat2.getBrain()->SetIdea("i am cat 2", 99);
	// cat3.getBrain()->SetIdea("i am cat 3", 99);
	// std::cout << cat.getBrain()->GetIdea(99) << std::endl;
	// std::cout << cat2.getBrain()->GetIdea(99) << std::endl;
	// std::cout << cat3.getBrain()->GetIdea(99) << std::endl;
	
	std::cout << "\n-------- Animal array -------" << std::endl;
	Animal	*animals[10];
	for (int i = 0; i < 10; i++)
	{
		std::cout << i << " - ";
		if (i < 5)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}

	std::cout << "\n-------- Animal array test that it worked -------" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << i << " - ";
		animals[i]->makeSound();
	}

	std::cout << "\n-------- Animal array delete -------" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << i << " - ";
		delete animals[i];
	}

	std::cout << "\n-------- deconstructors -------" << std::endl;
	return 0;
}
