/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 17:02:38 by lalwafi           #+#    #+#             */
/*   Updated: 2025/12/10 23:10:18 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

template <typename T>
class MutantStack : std::stack<T>
{
	public:
		MutantStack() {};
		MutantStack(const MutantStack &copy) : std::stack<T>(copy) {}
		MutantStack &operator=(const MutantStack &copy) {
			if (this != &copy)
				std::stack<T>::operator=(other);
			return (*this);
		}
		~Mutantstack() {}

		
};

#endif