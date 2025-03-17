/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeutsch <sdeutsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 15:48:29 by sdeutsch          #+#    #+#             */
/*   Updated: 2024/06/24 21:31:29 by sdeutsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
	Fixed const	_x;
	Fixed const	_y;
public:
	Point(void):_x(0), _y(0){};
	Point(float f1, float f2):_x(f1), _y(f2){};
	Point(Point const& src):_x(src._x), _y(src._y){};
	~Point(){};
	Point&	operator=(Point const& rhs);
	Fixed const&	getx(void) const;
	Fixed const&	gety(void) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif