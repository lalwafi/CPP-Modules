/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 20:13:02 by lalwafi           #+#    #+#             */
/*   Updated: 2025/07/23 03:56:31 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *_brain;
	public:
		Cat();
		Cat(const std::string name);
		Cat(const Cat &copy);
		~Cat();

		Cat &operator=(const Cat &copy);
		void	makeSound() const;
		Brain	*getBrain();
};

#endif