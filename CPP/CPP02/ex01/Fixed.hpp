/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeutsch <sdeutsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 16:00:50 by sdeutsch          #+#    #+#             */
/*   Updated: 2024/06/20 17:25:51 by sdeutsch         ###   ########.fr       */
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
	int	getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream& operator<<(std::ostream& ost, Fixed const& i);

#endif
