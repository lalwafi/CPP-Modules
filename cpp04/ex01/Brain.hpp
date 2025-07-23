/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 01:58:20 by lalwafi           #+#    #+#             */
/*   Updated: 2025/07/23 03:13:51 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include <string.h>
# include <cstdlib>
# include <cctype>
# include <cmath>

class Brain
{
	private:
		std::string		_ideas[100];
	public:
		Brain();
		Brain(const std::string idea);
		Brain(const Brain &copy);
		~Brain();

		Brain &operator=(const Brain &copy);
		void	SetIdeas(std::string idea);
		void	SetIdea(std::string idea, unsigned int i);
		std::string	GetIdea(unsigned int i) const;
		void	PrintAllIdeas() const;
};

#endif