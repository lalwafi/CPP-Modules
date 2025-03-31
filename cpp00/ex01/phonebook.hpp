/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 20:05:23 by lalwafi           #+#    #+#             */
/*   Updated: 2025/03/31 21:21:09 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "contact.hpp"

class Phonebook
{
	private:
		Contact		contacts[8];
		int			index;
		bool		full;

	public:
		Phonebook();
		~Phonebook();
		void	add_it(void);
		void	search_it(void);
};

#endif