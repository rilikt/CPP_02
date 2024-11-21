/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: h4ns <h4ns@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:43:00 by timschmi          #+#    #+#             */
/*   Updated: 2024/11/21 18:17:03 by h4ns             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// Point::Point()
// {
// 	x.setRawBits(0);
// 	y.setRawBits(0);
// }

// void Point::operator=(const Point &other)
// {
// 	Point p(other);
	
// }

// Point::Point(const Point &other)
// {
// 	this->x = other.x;
// }

float Point::getx(void) const
{
	return this->x.toFloat();
}

float Point::gety(void) const
{
	return this->y.toFloat();
}

std::ostream& operator<<(std::ostream &os, const Point &p)
{
	os << p.x.toFloat() << " | " << p.y.toFloat();

	return os;
}