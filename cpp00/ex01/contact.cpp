/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 19:42:14 by lalwafi           #+#    #+#             */
/*   Updated: 2025/03/31 21:11:45 by lalwafi          ###   ########.fr       */
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
	std::cout << "First name : ";
	std::cout << first_name << std::endl;
	std::cout << "Last name : ";
	std::cout << last_name << std::endl;
	std::cout << "Nickname : ";
	std::cout << nickname << std::endl;
	std::cout << "Phone number : ";
	std::cout << phone_number << std::endl;
	std::cout << "Darkest secret : ";
	std::cout << darkest_secret << std::endl;
}
