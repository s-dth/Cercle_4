/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeutsch <sdeutsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 16:42:07 by sdeutsch          #+#    #+#             */
/*   Updated: 2024/06/25 15:51:05 by sdeutsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	abs(Fixed value)
{
	if (value < 0)
		return (value * -1);
	else
		return (value);
}

Fixed area(Point const a, Point const b, Point const c)
{
	Fixed x_ab = b.getx().toFloat() - a.getx().toFloat();
	Fixed y_ab = b.gety().toFloat() - a.gety().toFloat();
	Fixed x_ac = c.getx().toFloat() - a.getx().toFloat();
	Fixed y_ac = c.gety().toFloat() - a.gety().toFloat();
	return (abs((x_ab * y_ac) - (y_ab * x_ac)) * Fixed(0.5f));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed	totalArea = area(a, b, c);

	Fixed area1 = area(point, a, b);
	Fixed area2 = area(point, b, c);
	Fixed area3 = area(point, c, a);
	return(area1.toFloat() + area2.toFloat() + area3.toFloat() == totalArea.toFloat());
}

int main() {
    Point A(1.0f, 1.0f);
    Point B(5.0f, 1.0f);
    Point C(3.0f, 5.0f);
    Point P1(7.0f, 4.0f);
	Point P2(3.0f, 2.0f);

    bool inside_p1 = bsp(A, B, C, P1);
    if (inside_p1) {
        std::cout << "Point P1 is inside triangle ABC." << std::endl;
    } else {
        std::cout << "Point P1 is outside triangle ABC." << std::endl;
    }
	bool inside_p2 = bsp(A, B, C, P2);
    if (inside_p2) {
        std::cout << "Point P2 is inside triangle ABC." << std::endl;
    } else {
        std::cout << "Point P2 is outside triangle ABC." << std::endl;
    }
    return 0;
}