/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 01:58:20 by lalwafi           #+#    #+#             */
/*   Updated: 2025/07/22 02:09:52 by lalwafi          ###   ########.fr       */
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
		Brain(const std::string type);
		Brain(const Brain &copy);
		~Brain();

		Brain &operator=(const Brain &copy);
};

#endif