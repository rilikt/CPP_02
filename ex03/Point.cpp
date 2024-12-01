/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:43:00 by timschmi          #+#    #+#             */
/*   Updated: 2024/12/01 15:36:29 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}

Point::Point(const float x, const float y) : x(x), y(y)
{
}

Point::Point(const Point &other) : x(other.x) , y(other.y)
{
}

Point& Point::operator=(const Point &other)
{
	if (this == &other)
		return *this;
	else
		std::cout << Ro << "Brother those are some const values you are trying to re-assign" << R << std::endl;

	return *this;
}

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
	os << p.getx() << " | " << p.gety();

	return os;
}
