/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeutsch <sdeutsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 16:00:47 by sdeutsch          #+#    #+#             */
/*   Updated: 2024/06/19 19:26:24 by sdeutsch         ###   ########.fr       */
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
	std::cout << "GetRawBits member function called" << std::endl;
	return(this->_rawbits);
}

void	Fixed::setRawBits(int const raw)
{
	this->_rawbits = raw;
}
