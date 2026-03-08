/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 00:31:14 by lalwafi           #+#    #+#             */
/*   Updated: 2026/03/08 00:05:21 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
# include <string>
# include <iostream>
# include <fstream> // ifstream
# include <sstream> // string stream
# include <cstdlib>
# include <map>

class BitcoinExchange
{
	private:
		std::map<std::string, float>	_rates;
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &copy);
		BitcoinExchange &operator=(const BitcoinExchange &rhs);
		~BitcoinExchange();

		void		loadDatabase();
		void		parseInput(char *file_char);
		void		execute(std::string line);
		bool		isValidDate(std::string date);
		bool		isValidValue(std::string value);
		std::string	trimWhiteSpaces(std::string str);
};

#endif