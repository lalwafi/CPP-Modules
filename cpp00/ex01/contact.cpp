/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 02:48:31 by lalwafi           #+#    #+#             */
/*   Updated: 2025/04/01 02:50:22 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void Contact::print_one_contact(int i)
{
    std::cout << "|         " << (i + 1) << "|";
    std::cout << "|";
    for (int i = 0; i < 10; i++)
    {
        if (static_cast<int>(this->first_name.length()) > i)
            std::cout << this->first_name[i];
        else
            std::cout << " ";
    }
    std::cout << "|";
    for (int i = 0; i < 10; i++)
    {
        if (static_cast<int>(this->last_name.length()) > i)
            std::cout << this->last_name[i];
        else
            std::cout << " ";
    }
    std::cout << "|";
    for (int i = 0; i < 10; i++)
    {
        if (static_cast<int>(this->nickname.length()) > i)
            std::cout << this->nickname[i];
        else
            std::cout << " ";
    }
    std::cout << "|" << std::endl;
}
