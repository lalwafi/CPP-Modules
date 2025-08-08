/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 20:23:20 by lalwafi           #+#    #+#             */
/*   Updated: 2025/05/26 17:41:49 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string.h>
# include <cstdlib>
# include <cctype>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(std::string new_name);
		Zombie();
		~Zombie();
		void	set_Name(std::string name);
		void	announce(void);
};

Zombie* zombieHorde( int N, std::string name );

#endif