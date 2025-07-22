/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 20:13:02 by lalwafi           #+#    #+#             */
/*   Updated: 2025/07/21 23:33:29 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>
# include <string.h>
# include <cstdlib>
# include <cctype>
# include <cmath>

class WrongAnimal
{
	protected:
		std::string		_type;
	public:
		WrongAnimal();
		WrongAnimal(const std::string name);
		WrongAnimal(const WrongAnimal &copy);
		~WrongAnimal();

		WrongAnimal &operator=(const WrongAnimal &copy);
		std::string	getType() const;
		void	makeSound() const;
};

#endif