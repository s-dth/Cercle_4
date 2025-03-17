/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeutsch <sdeutsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 16:00:47 by sdeutsch          #+#    #+#             */
/*   Updated: 2024/06/21 17:24:57 by sdeutsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->_rawbits = 0;
}
Fixed::Fixed(Fixed const& src)
{
	*this = src;
}
Fixed::~Fixed()
{
}
Fixed&	Fixed::operator=(Fixed const& rhs)
{
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
	this->_rawbits = n << this->_bytes;
}

Fixed::Fixed(float const f)
{
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

bool	Fixed::operator>(Fixed const& rhs) const
{
	return(this->_rawbits > rhs.getRawBits());
}

bool	Fixed::operator<(Fixed const& rhs) const
{
	return(this->_rawbits < rhs.getRawBits());
}

bool	Fixed::operator>=(Fixed const& rhs) const
{
	return(this->_rawbits >= rhs.getRawBits());
}

bool	Fixed::operator<=(Fixed const& rhs) const
{
	return(this->_rawbits <= rhs.getRawBits());
}

bool	Fixed::operator==(Fixed const& rhs) const
{
	return(this->_rawbits == rhs.getRawBits());
}

bool	Fixed::operator!=(Fixed const& rhs) const
{
	return(this->_rawbits != rhs.getRawBits());	
}

Fixed	Fixed::operator+(Fixed const& rhs) const
{
	Fixed	result;
	result.setRawBits((this->_rawbits + rhs.getRawBits()) >> this->_bytes);
	return(result);
}

Fixed	Fixed::operator-(Fixed const& rhs) const
{
	Fixed	result;
	result.setRawBits((this->_rawbits - rhs.getRawBits()) >> this->_bytes);
	return(result);
}

Fixed	Fixed::operator*(Fixed const& rhs) const
{
	Fixed	result;
	result.setRawBits((this->_rawbits * rhs.getRawBits()) >> this->_bytes);
	return(result);
}

Fixed	Fixed::operator/(Fixed const& rhs) const
{
	Fixed	result;
	result.setRawBits((this->_rawbits / rhs.getRawBits()) >> this->_bytes);
	return(result);
}

Fixed&	Fixed::operator++(void)
{
	this->_rawbits++;
	return(*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp;
	tmp = Fixed(*this);
	this->_rawbits++;
	return(tmp);
}

Fixed&	Fixed::operator--(void)
{
	this->_rawbits--;
	return(*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp;
	tmp = Fixed(*this);
	this->_rawbits--;
	return(tmp);
}

Fixed&	Fixed::min(Fixed& lhs, Fixed& rhs)
{
	if (lhs >= rhs)
		return(rhs);
	else
		return(lhs);
}

Fixed&	Fixed::min(Fixed const& lhs, Fixed const& rhs)
{
	if (const_cast<Fixed&>(lhs) >= rhs)
		return(const_cast<Fixed&>(rhs));
	else
		return(const_cast<Fixed&>(lhs));
}

Fixed&	Fixed::max(Fixed& lhs, Fixed& rhs)
{
	if (lhs <= rhs)
		return(rhs);
	else
		return(lhs);
}

Fixed&	Fixed::max(Fixed const& lhs, Fixed const& rhs)
{
	if (const_cast<Fixed&>(lhs) <= rhs)
		return(const_cast<Fixed&>(rhs));
	else
		return(const_cast<Fixed&>(lhs));
}
