/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 21:43:40 by lalwafi           #+#    #+#             */
/*   Updated: 2025/10/07 18:33:47 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include <cstdlib>
# include <ctime>

template <typename T>
class Array
{
	private:
		T				*_array;
		unsigned int	_size;
	public:
		Array<T>() : _size(0)
		{
			std::cout << "Array constructor called" << std::endl;
			this->_array = new T[this->_size];
		}
		
		Array<T>(unsigned int n) : _size(n)
		{
			std::cout << "Array custom constructor called" << std::endl;
			this->_array = new T[this->_size];
		}
		
		Array<T>(const Array<T> &copy) : _size(copy._size)
		{
			std::cout << "Array copy constructor called" << std::endl;
			this->_array = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++)
				this->_array[i] = copy._array[i];
		}

		~Array<T>()
		{
			std::cout << "Array destructor called" << std::endl;
			delete[] this->_array;
		}

		Array<T> &operator=(const Array<T> &copy)
		{
			std::cout << "Array copy assignment operator = " << std::endl;
			if (this != &copy)
			{
				delete[] this->_array;
				this->_size = copy._size;
				this->_array = new T[this->_size];
				for (unsigned int i = 0; i < this->_size; i++)
					this->_array[i] = copy._array[i];
			}
			return (*this);
		}

		T &operator[](unsigned int i)
		{
			if (i >= this->_size)
				throw std::out_of_range("Index is out of bounds :("); //two usable exceptions, kept both to know
			return (this->_array[i]);
		}

		unsigned int size() const
		{
			return (this->_size);
		}
};

#endif