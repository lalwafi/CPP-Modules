/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 20:06:06 by lalwafi           #+#    #+#             */
/*   Updated: 2025/03/28 20:10:55 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <string.h>
# include <cstdlib>
# include <cctype>

class	Contact
{
	private:
		std::string		first_name;
		std::string		last_name;
		std::string		nickname;
		std::string		phone_number;
		std::string		darkest_secret;
	
	public:
		Contact();
		~Contact();
		void	new_contact(std::string first_name, std::string last_name, \
			std::string nickname, std::string phone_number, std::string darkest_secret);
		void	print_contact();
		void	print_one_contact(int i);
};

#endif
