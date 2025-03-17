/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeutsch <sdeutsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 16:00:50 by sdeutsch          #+#    #+#             */
/*   Updated: 2024/06/19 19:31:28 by sdeutsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int	_rawbits;
	static const int	bits = 8;

public:
	Fixed(void);
	Fixed(Fixed const& src);
	~Fixed();
	Fixed&	operator=(Fixed const& rhs);
	int	getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif