/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 01:07:32 by lalwafi           #+#    #+#             */
/*   Updated: 2026/03/08 00:05:21 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	// std::cout << "BitcoinExchange constructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
	// std::cout << "BitcoinExchange copy constructor called" << std::endl;
	*this = copy;
}

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &rhs)
{
	// std::cout << "BitcoinExchange = operator constructor called" << std::endl;
	if (this != &rhs)
		this->_rates = rhs._rates;
	return (*this);
}

BitcoinExchange::~BitcoinExchange()
{
	// std::cout << "BitcoinExchange deconstructor called" << std::endl;
}

void	BitcoinExchange::loadDatabase()
{
	std::ifstream file("data.csv");
	if (!file.is_open())
		throw std::runtime_error("Error: could not open database.");

	std::string line, date, price;
	std::getline(file, line);
	
	while (std::getline(file, line))
	{
		std::stringstream ss(line);
		if (!std::getline(ss, date, ',') || !std::getline(ss, price))
			continue;
		this->_rates[date] = std::atof(price.c_str());
	}
}

void BitcoinExchange::parseInput(char *file_char)
{
	std::string	file_string = file_char;
	
	// check if file is .txt of ?.csv?
	if (file_string.length() < 4)
		throw std::runtime_error("Error: wrong input file format, should be .txt or .csv");
		
	std::string file_check = file_string.substr(file_string.length() - 4, 4);
	if (file_check != ".txt" && file_check != ".csv")
		throw std::runtime_error("Error: wrong input file format, should be txt or csv.");
	
	std::ifstream infile(file_string.c_str());
	if (!infile.is_open())
		throw std::runtime_error("Error: could not open file.");
	
	// read the file line by line and skip first line
	// check the format is good, date is valid, and value is valid
	// check the rate by using the date as the key, and multiply that rate by the value from input
	// if a line has an error, print error and move to next line
	std::string	line;
	std::getline(infile, line);
	while (std::getline(infile, line))
		execute(line);
}

void	BitcoinExchange::execute(std::string line)
{
	std::stringstream	ss(line);
	std::string			date, valuestr;

	size_t pos = line.find(" | ");
	if (pos == std::string::npos)
	{
		std::cout << "Error: bad input => " << line << std::endl;
		return ;
	}
	if (!std::getline(ss, date, '|') || !std::getline(ss, valuestr))
	{
		std::cout << "Error: bad input => " << line << std::endl;
		return ;
	}
	date = trimWhiteSpaces(date);
	valuestr = trimWhiteSpaces(valuestr);
	if (!isValidDate(date))
	{
		std::cout << "Error: bad input date => " << line << std::endl;
		return ;
	}
	if (!isValidValue(valuestr))
		return ;
	float value = atof(valuestr.c_str());
	// now we check the date if it exists in _rates, if not find the closest match going backwards
	// multiply that rate by the value from the input file
	// if the iterator is at the end then take the last value (it--)
	// if the iterator is at the beginning and its still bigger than the date then no rate available 
	// if not beginning or end, and the iterator is still unequal to the date, then take previous value (it--)
	std::map<std::string, float>::iterator it = this->_rates.lower_bound(date);
	if (it == this->_rates.end())
		it--;
	else if (it == this->_rates.begin() && (*it).first > date)
	{
		std::cout << "Error: no rate available at date => " << date << std::endl;
		return ;
	}
	else if ((*it).first > date)
		it--;
	float rate = (*it).second * value;
	std::cout << (*it).first << " => " << value << " = " << rate << std::endl;
	return ;
}

bool	BitcoinExchange::isValidValue(std::string value)
{
	// value is positive number
	// value is between 0 - 1000
	// value decimal numbers??? how many significant figures
	// lets say significant figures is 2 max
	// if there is a dot, check if theres two dots,
	if (value[0] == '-')
	{
		std::cout << "Error: not a positive number." << std::endl;
		return false;
	}
	bool dotFound = false;
	for (size_t i = 0; i < value.length(); i++)
	{
		if (isdigit(value[i]))
			continue;
		else if (value[i] == '.' && dotFound == false)
		{
			dotFound = true;
			if (i > 4)
			{
				std::cout << "Error: too large a number." << std::endl;
				return false;
			}
		}
		else
		{
			std::cout << "Error: bad input => " << value << std::endl;
			return false;
		}
	}
	//if u want 0 > value < 1000 instead of 0 >= value <= 1000, change this
	if (atof(value.c_str()) > 1000)
	{
		std::cout << "Error: too large a number." << std::endl;
		return false;
	}
	return true;
}

bool	BitcoinExchange::isValidDate(std::string date)
{
	//check the date is valid as in that date exists, year-month-day        ok
	// make it work if yyyyy-m-dd (technically 10 length but wrong format)  ok
	// also ---------- or --1--1---1(length is 10 but wtf is that)          ok
	// check leap years as well                                             ok
	if (date.length() != 10)
		return false;

	for (size_t i = 0; i < date.length(); i++)
	{
		if ((i == 4 || i == 7) && date[i] != '-')
			return false;
		if ((i != 4 && i != 7) && !isdigit(date[i]))
			return false;
	}
	int year = atoi(date.substr(0, 4).c_str());
	int month = atoi(date.substr(5, 2).c_str());
	int day = atoi(date.substr(8, 2).c_str());
	if (month < 1 || month > 12 || day <= 0)
		return false;
	
	if ((year % 4) != 0) //not leap
	{
		if (month == 2 && day > 28)
			return (false);
		else if ((month == 1 || month == 3 || month == 5 || month == 7 || \
			month == 8 || month == 10 || month == 12) && day > 31)
			return (false);
		else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
			return (false);
	}
	else //leap
	{
		if (month == 2 && day > 29)
			return (false);
		else if ((month == 1 || month == 3 || month == 5 || month == 7 || \
			month == 8 || month == 10 || month == 12) && day > 31)
			return (false);
		else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
			return (false);
	}
	return true;
}

std::string	BitcoinExchange::trimWhiteSpaces(std::string str)
{
	size_t start = 0;
    while (start < str.length() && std::isspace(str[start]))
        start++;

    size_t end = str.length();
    while (end > start && std::isspace(str[end - 1]))
        end--;

    return (str.substr(start, end - start));
}