/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 23:41:21 by lalwafi           #+#    #+#             */
/*   Updated: 2026/03/14 21:35:58 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm> // dis for find
# include <stdexcept> // for da std::runtime_error
# include <vector>
# include <list>
# include <deque>
# include <set>

template <typename T>
int easyfind(T &container, int value)
{
	typename T::iterator iter = std::find(container.begin(), container.end(), value);
	if (iter == container.end())
		throw std::runtime_error("Value not found");

	return *iter;
}

#endif
