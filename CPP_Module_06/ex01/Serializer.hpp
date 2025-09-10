/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 15:38:17 by lalwafi           #+#    #+#             */
/*   Updated: 2025/09/08 14:51:25 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP
# include <iostream>
# include <cstdlib>
# include <string>

struct Data
{
	int			i;
	std::string	string;
};


class Serializer
{
	private:
		Serializer();
		Serializer(const Serializer &copy);
		Serializer &operator=(const Serializer &b);
		~Serializer();
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif