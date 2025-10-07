/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 00:35:39 by lalwafi           #+#    #+#             */
/*   Updated: 2025/10/07 23:28:16 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template <typename T>
	void	printIt(const T &thingToPrint)
	{
		std::cout << thingToPrint << std::endl;
	}

template <typename T>
	void	iter(T *array, unsigned int length, void(*function)(T &))
	{
		for (unsigned int i = 0; i < length; i++)
			function(array[i]);
	}

template <typename T>
	void	iter(const T *array, unsigned int length, void(*function)(const T &))
	{
		for (unsigned int i = 0; i < length; i++)
			function(array[i]);
	}

#endif