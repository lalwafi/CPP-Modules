/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 02:48:31 by lalwafi           #+#    #+#             */
/*   Updated: 2025/04/01 20:09:38 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact()
{}

Contact::~Contact()
{}

void	Contact::new_contact(std::string first, std::string last, \
	std::string nick, std::string phone, std::string darkest)
{
	this->first_name = first;
	this->last_name = last;
	this->nickname = nick;
	this->phone_number = phone;
	this->darkest_secret = darkest;
}

void	Contact::print_contact()
{
	std::cout << "_____________________________________________" << std::endl;
	std::cout << "First name     : ";
	std::cout << first_name << std::endl;
	std::cout << "Last name      : ";
	std::cout << last_name << std::endl;
	std::cout << "Nickname       : ";
	std::cout << nickname << std::endl;
	std::cout << "Phone number   : ";
	std::cout << phone_number << std::endl;
	std::cout << "Darkest secret : ";
	std::cout << darkest_secret << std::endl;
	std::cout << "_____________________________________________" << std::endl;
}

void Contact::print_one_contact(int index)
{
    size_t  j = 0;
    std::cout << "|         " << (index + 1) << "|";
    for (size_t i = 0; i < 10; i++)
    {
        if (this->first_name.length() < 10 && (10 - this->first_name.length()) > i)
            std::cout << " ";
        else 
           std::cout << this->first_name[j++];
        if (this->first_name.length() > 10 && i == 8)
        {
            std::cout << ".";
            i++;
        }
    }
    std::cout << "|";
    j = 0;
    for (size_t i = 0; i < 10; i++)
    {
        if (this->last_name.length() < 10 && (10 - this->last_name.length()) > i)
            std::cout << " ";
        else 
           std::cout << this->last_name[j++];
        if (this->last_name.length() > 10 && i == 8)
        {
            std::cout << ".";
            i++;
        }
    }
    std::cout << "|";
    j = 0;
    for (size_t i = 0; i < 10; i++)
    {
        if (this->nickname.length() < 10 && (10 - this->nickname.length()) > i)
            std::cout << " ";
        else 
           std::cout << this->nickname[j++];
        if (this->nickname.length() > 10 && i == 8)
        {
            std::cout << ".";
            i++;
        }
    }
    std::cout << "|" << std::endl;
}
