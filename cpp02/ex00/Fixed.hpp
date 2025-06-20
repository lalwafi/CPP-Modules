/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 23:52:45 by lalwafi           #+#    #+#             */
/*   Updated: 2025/06/21 01:22:09 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string.h>
# include <cstdlib>
# include <cctype>

class Fixed
{
	private:
		int					_number;
		static const int	_bits = 8;
	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed&	operator = (const Fixed &b);
		~Fixed();
		int		getRawBits() const;
		void	setRawBits(int const raw);
};

#endif
