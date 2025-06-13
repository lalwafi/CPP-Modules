/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 18:16:46 by lalwafi           #+#    #+#             */
/*   Updated: 2025/06/12 18:23:21 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>
# include <string.h>
# include <cstdlib>
# include <cctype>

class Weapon
{
	private:
		std::string _type;
	public:
		Weapon();
		Weapon(std::string weapon);
		~Weapon();
		std::string	&getType();
		void		setType(std::string type);
};

#endif