/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: h4ns <h4ns@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:39:46 by timschmi          #+#    #+#             */
/*   Updated: 2024/11/21 18:59:10 by h4ns             ###   ########.fr       */
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

		friend std::ostream& operator<<(std::ostream &os, const Point &p);
	


};

// bsp
bool bsp_triangle(Point &p, Point &a, Point &b, Point &c);
Fixed is_inside(Point &p, Point &a, Point &b);

#endif
