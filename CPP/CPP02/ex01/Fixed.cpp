/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeutsch <sdeutsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 16:00:47 by sdeutsch          #+#    #+#             */
/*   Updated: 2024/06/20 18:52:57 by sdeutsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_rawbits = 0;
}
Fixed::Fixed(Fixed const& src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
Fixed&	Fixed::operator=(Fixed const& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_rawbits = rhs.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return(this->_rawbits);
}

void	Fixed::setRawBits(int const raw)
{
	this->_rawbits = raw;
}

Fixed::Fixed(int const n)
{
	std::cout << "Int constructor called" << std::endl;
	this->_rawbits = n << this->_bytes;
}

Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called" << std::endl;
	this->_rawbits = roundf(f * (1 << this->_bytes));
}

float	Fixed::toFloat(void) const
{
	float	f;
	f = (static_cast<float>(this->_rawbits)) / (1 << this->_bytes);
	return (f);
}

int		Fixed::toInt(void) const
{
	return (this->_rawbits >> this->_bytes);
}

std::ostream& operator<<(std::ostream& ost, Fixed const& i)
{
	ost << i.toFloat();
	return (ost);
}
