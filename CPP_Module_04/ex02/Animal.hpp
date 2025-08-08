/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 19:30:43 by lalwafi           #+#    #+#             */
/*   Updated: 2025/07/23 04:14:15 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <string.h>
# include <cstdlib>
# include <cctype>
# include <cmath>

class Animal
{
	protected:
		std::string		_type;
	public:
		Animal();
		Animal(const std::string name);
		Animal(const Animal &copy);
		virtual ~Animal();

		Animal &operator=(const Animal &copy);
		std::string	getType() const;
		virtual void	makeSound() const = 0;
};

#endif