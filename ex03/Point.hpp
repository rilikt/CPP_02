/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:39:46 by timschmi          #+#    #+#             */
/*   Updated: 2024/11/30 14:13:39 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		const Fixed x;
		const Fixed y;

	public:
		Point(void) : x(0), y(0) {};
		Point(const float x, const float y) : x(x), y (y) {};
		Point(const Point &other) : x(other.x) , y(other.y) {};
		float getx(void) const;
		float gety(void) const;

		// void operator=(const Point &other); // copy assignment operator for const values?!?!

};

// bsp
bool bsp_triangle(Point &p, Point &a, Point &b, Point &c);
Fixed is_inside(Point &p, Point &a, Point &b);

std::ostream& operator<<(std::ostream &os, const Point &p);

#endif
