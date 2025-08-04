/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 20:23:20 by lalwafi           #+#    #+#             */
/*   Updated: 2025/04/04 19:15:39 by lalwafi          ###   ########.fr       */
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
		~Zombie();
		void	announce(void);
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif