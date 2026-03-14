/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 17:02:38 by lalwafi           #+#    #+#             */
/*   Updated: 2026/03/14 22:26:36 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack> // A container adapter that restricts access to a container and provides LIFO behavior.
# include <deque>
# include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() {};
		MutantStack(const MutantStack &copy) : std::stack<T>(copy) {}
		MutantStack &operator=(const MutantStack &copy) {
			if (this != &copy)
				std::stack<T>::operator=(copy);
			return (*this);
		}
		~MutantStack() {}

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator	begin() {
			return(this->c.begin());
		}
		iterator	end() {
			return(this->c.end());
		}
};

#endif
