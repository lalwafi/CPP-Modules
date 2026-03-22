/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 20:39:45 by lalwafi           #+#    #+#             */
/*   Updated: 2026/03/23 02:14:13 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# include <vector>
# include <deque>
# include <iostream>
# include <stdexcept>
# include <cstdlib>

class PmergeMe
{
	private:
		std::vector<int> _vec;
		std::deque<int>	_deq;
		bool	parseInput(char **av);
		void	sortVec(std::vector<int> &vec);
		void	sortDeq(std::deque<int> &deq);
	public:
		PmergeMe();
		PmergeMe(const PmergeMe &copy);
		PmergeMe(char **str);
		PmergeMe	&operator=(const PmergeMe &rhs);
		~PmergeMe();

};

#endif