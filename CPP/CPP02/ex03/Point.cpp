/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeutsch <sdeutsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 16:05:19 by sdeutsch          #+#    #+#             */
/*   Updated: 2024/06/21 17:22:50 by sdeutsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point&	Point::operator=(Point const& rhs)
{
	if (this != &rhs)
	{
		const_cast<Fixed&>(this->_x) = rhs._x;
		const_cast<Fixed&>(this->_y) = rhs._y;
	}
	return (*this);
}

Fixed const&	Point::getx(void) const
{
	return(this->_x);
}

Fixed const&	Point::gety(void) const
{
	return(this->_y);
}
