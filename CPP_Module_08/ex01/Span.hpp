/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 13:04:04 by lalwafi           #+#    #+#             */
/*   Updated: 2025/12/08 21:51:12 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

class Span
{
	private:
		unsigned int		_max;
		std::vector<int>	_vector;
	public:
		Span();
		Span(unsigned int i);
		Span(Span const &copy);
		Span &operator=(const Span &s);
		~Span();
		
		void	addNumber(int i);
		int		shortestSpan();
		int		longestSpan();
		// ur msising one

		class MaxCapacityReached : std::exception
		{
			public:
				const char *what() const throw();
		}
};

#endif