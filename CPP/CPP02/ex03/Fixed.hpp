/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeutsch <sdeutsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 16:00:50 by sdeutsch          #+#    #+#             */
/*   Updated: 2024/06/21 15:21:08 by sdeutsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int	_rawbits;
	static const int	_bytes = 8;

public:
	Fixed(void);
	Fixed(Fixed const& src);
	Fixed(int const n);
	Fixed(float const f);
	~Fixed();
	Fixed&	operator=(Fixed const& rhs);
	bool	operator>(Fixed const& rhs) const;
	bool	operator<(Fixed const& rhs) const;
	bool	operator>=(Fixed const& rhs) const;
	bool	operator<=(Fixed const& rhs) const;
	bool	operator==(Fixed const& rhs) const;
	bool	operator!=(Fixed const& rhs) const;
	Fixed	operator+(Fixed const& rhs) const;
	Fixed	operator-(Fixed const& rhs) const;
	Fixed	operator*(Fixed const& rhs) const;
	Fixed	operator/(Fixed const& rhs) const;
	Fixed&	operator++(void);
	Fixed	operator++(int);
	Fixed&	operator--(void);
	Fixed	operator--(int);
	static Fixed&	min(Fixed& lhs, Fixed& rhs);
	static Fixed&	min(Fixed const& lhs, Fixed const& rhs);
	static Fixed&	max(Fixed& lhs, Fixed& rhs);
	static Fixed&	max(Fixed const& lhs, Fixed const& rhs);
	int	getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream& operator<<(std::ostream& ost, Fixed const& i);

#endif
