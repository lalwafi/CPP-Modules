/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 19:44:50 by lalwafi           #+#    #+#             */
/*   Updated: 2025/04/01 20:14:32 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook()
{
	this->index = 0;
	this->full = false;
}

Phonebook::~Phonebook()
{}

bool	continue_or_no(void)
{
	std::string	input;
	std::cout << "Phonebook is full, if you wish to replace the oldest contact";
	std::cout << "type 1" << std::endl;
	if (getline(std::cin, input) && input.compare("1") == 0)
		return (true);
	return (false);
}

bool	only_numbers(std::string str)
{
	int	i = -1;
	while (str[++i])
	{
		if (!isdigit(str[i]))
			return (false);
	}
	return (true);
}

void	Phonebook::add_it(void)
{
	std::string	input;
	std::string		first_name = "";
	std::string		last_name = "";
	std::string		nickname = "";
	std::string		phone_number = "";
	std::string		darkest_secret = "";

	if (this->full == true && continue_or_no() == false)
		return ;
	std::cout << "_____________________________________________" << std::endl;
	while (1)
	{
		std::cout << "First name : ";
		if (!getline(std::cin, input))
		{
			std::cout << std::endl << "exiting..." << std::endl;
			exit(0);
		}
		if (input.empty() == true)
			std::cout << "Please type something don't leave it empty :(" << std::endl;
		else
		{
			first_name = input;
			break;
		}
	}
	while (1)
	{
		std::cout << "Last name : ";
		if (!getline(std::cin, input))
		{
			std::cout << std::endl << "exiting..." << std::endl;
			exit(0);
		}
		if (input.empty() == true)
			std::cout << "Please type something don't leave it empty :(" << std::endl;
		else
		{
			last_name = input;
			break;
		}
	}
	while (1)
	{
		std::cout << "Nickname : ";
		if (!getline(std::cin, input))
		{
			std::cout << std::endl << "exiting..." << std::endl;
			exit(0);
		}
		if (input.empty() == true)
			std::cout << "Please type something don't leave it empty :(" << std::endl;
		else
		{
			nickname = input;
			break;
		}
	}
	while (1)
	{
		std::cout << "Phone number : ";
		if (!getline(std::cin, input))
		{
			std::cout << std::endl << "exiting..." << std::endl;
			exit(0);
		}
		if (input.empty() == true)
			std::cout << "Please type something don't leave it empty :(" << std::endl;
		else if (only_numbers(input) == true)
		{
			phone_number = input;
			break;
		}
		else
			std::cout << "Only numbers please" << std::endl;
	}
	while (1)
	{
		std::cout << "Darkest secret 🤫: ";
		if (!getline(std::cin, input))
		{
			std::cout << std::endl << "exiting..." << std::endl;
			exit(0);
		}
		if (input.empty() == true)
			std::cout << "Please type something don't leave it empty :(" << std::endl;
		else
		{
			darkest_secret = input;
			break;
		}
	}
	std::cout << "_____________________________________________" << std::endl;
	this->contacts[this->index % 8].new_contact(first_name, last_name, \
		nickname, phone_number, darkest_secret);
	this->index++;
	if (this->index > 7)
		this->full = true;
}

void	Phonebook::search_it(void)
{
	if (index == 0)
	{
		std::cout << "Phonebook is empty, type ADD to add a contact." << std::endl;
		return ;
	}
	std::cout << " ___________________________________________ " << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "=============================================" << std::endl;
	for (int i = 0; i < this->index && i < 8; i++)
	{
		this->contacts[i % 8].print_one_contact(i % 8);
	}
	std::cout << " ___________________________________________ " << std::endl << std::endl;
	std::string	input;
	while (1)
	{
		std::cout << "What contact would you like to display? Index : ";
		if (!getline(std::cin, input))
		{
			std::cout << std::endl << "exiting..." << std::endl;
			exit(0);
		}
		if (input.length() == 1 && input >= "1" && input <= "8" && (std::atoi(input.c_str()) - 1) < index)
		{
			this->contacts[std::atoi(input.c_str()) - 1].print_contact();
			return ;
		}
		else
			std::cout << "Please type the index you wish to search from the list above (eg: '1')" << std::endl;
	}
}

int main(void)
{
    Phonebook	phonebook;
    std::string	input;

    while (1)
    {
		std::cout << " ______________________________________" << std::endl;
        std::cout << "| commands | 'ADD' | 'SEARCH' | 'EXIT' |" << std::endl;
		std::cout << " ______________________________________" << std::endl;
		std::cout  << std::endl << "> ";
        if (!getline(std::cin, input))
            break;
        if (input.compare("ADD") == 0)
            phonebook.add_it();
        else if (input.compare("SEARCH") == 0)
            phonebook.search_it();
        else if (input.compare("EXIT") == 0)
            break ;
        else
            std::cout << "❗❗Invalid command..." << std::endl;
    }
	std::cout << std::endl << "exiting..." << std::endl;
    return (0);
}
