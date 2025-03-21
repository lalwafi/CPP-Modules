/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 16:50:36 by lalwafi           #+#    #+#             */
/*   Updated: 2025/03/21 22:24:02 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

class Contact
{
	public:
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	phonenumber;
		std::string	darksecret;
};

class Phonebook
{
	private:
		Contact contacts[8];
		int contactcount;
	
	public:
		PhoneBook() : contactcount(0) {}

		void add_contact
};

