/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 19:30:43 by lalwafi           #+#    #+#             */
/*   Updated: 2025/10/17 04:02:27 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <string>
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
		virtual void	makeSound() const;
};

#endif