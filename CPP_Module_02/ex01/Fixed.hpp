/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 23:52:45 by lalwafi           #+#    #+#             */
/*   Updated: 2025/07/04 16:36:15 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string.h>
# include <cstdlib>
# include <cctype>
# include <cmath>

class Fixed
{
	private:
		int					_raw;
		static const int	_bits = 8;
	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed(const int i);
		Fixed(const float f);
		Fixed&	operator = (const Fixed &b);
		~Fixed();

		int		getRawBits() const;
		void	setRawBits(int const raw);
		int		toInt( void ) const;
		float	toFloat( void ) const;
};

std::ostream &operator << (std::ostream &os, const Fixed &fixed);

#endif
