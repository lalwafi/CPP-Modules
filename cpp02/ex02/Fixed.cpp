/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalwafi <lalwafi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 23:56:46 by lalwafi           #+#    #+#             */
/*   Updated: 2025/07/04 22:03:55 by lalwafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	// std::cout << "Default constructor called" << std::endl;
	this->_raw = 0;
}

Fixed::Fixed(const Fixed &copy) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(const int i) {
	// std::cout << "Int constructor called" << std::endl;
	this->_raw = i << this->_bits; // 5 << 8 = 1280 ... 1280/256 = 5.0
}

Fixed::Fixed(const float f) {
	// std::cout << "Float constructor called" << std::endl;
	this->_raw = roundf(f * (1 << this->_bits)); // 5.23 * 256 = 1339 ... 804/256 = 5.23047
}

Fixed&	Fixed::operator = (const Fixed &b){
	// std::cout << "Copy assignment operator called" << std::endl;
	this->_raw = b.getRawBits();
	return (*this);
}

Fixed::~Fixed() {
	// std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits() const {
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_raw);
}

void	Fixed::setRawBits(int const raw) {
	// std::cout << "setRawBits member function called" << std::endl;
	this->_raw = raw;
}

int	Fixed::toInt() const {
	return (this->_raw >> this->_bits);
}

float Fixed::toFloat() const {
	return ((float)this->_raw / (1 << this->_bits));
}


std::ostream &operator << (std::ostream &os, const Fixed &fixed) {
	os << fixed.toFloat();
	return (os);
}

// operators:  +  -  *  /

Fixed	Fixed::operator+(const Fixed &num2) const{
	return(this->toFloat() + num2.toFloat()); // method 1
}

Fixed	Fixed::operator-(const Fixed &num2) const{
	return(this->toFloat() - num2.toFloat());
}

Fixed	Fixed::operator*(const Fixed &num2) const{
	return(this->toFloat() * num2.toFloat());
}

Fixed	Fixed::operator/(const Fixed &num2) const{
	return(this->toFloat() / num2.toFloat());
}


// operators:  <  >  <=  >=  ==  !=

bool	Fixed::operator<(const Fixed &num2) const{
	return (this->_raw < num2._raw);
}

bool	Fixed::operator>(const Fixed &num2) const{
	return (this->_raw > num2._raw);
}

bool	Fixed::operator<=(const Fixed &num2) const{
	return (this->_raw <= num2._raw);
}

bool	Fixed::operator>=(const Fixed &num2) const{
	return (this->_raw >= num2._raw);
}

bool	Fixed::operator==(const Fixed &num2) const{
	return (this->_raw == num2._raw);
}

bool	Fixed::operator!=(const Fixed &num2) const{
	return (this->_raw != num2._raw);
}


// operators:  ++  --

Fixed&	Fixed::operator++(){
	this->_raw += 1;
	return (*this);
}

Fixed	Fixed::operator++(int){
	Fixed	old = *this;
	this->_raw += 1;
	return (old);
}

Fixed&	Fixed::operator--(){
	this->_raw -= 1;
	return (*this);
}

Fixed	Fixed::operator--(int){
	Fixed	old = *this;
	this->_raw -= 1;
	return (old);
}

// min && max

Fixed&	Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed&	Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed&	Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed&	Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}
