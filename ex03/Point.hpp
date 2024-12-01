/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:39:46 by timschmi          #+#    #+#             */
/*   Updated: 2024/12/01 15:48:53 by timschmi         ###   ########.fr       */
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
		Point(void);
		Point(const float x, const float y);
		Point(const Point &other);
		float getx(void) const;
		float gety(void) const;

		Point& operator=(const Point &other); // copy assignment operator for const values?!?!

};

// bsp
bool bsp( Point const a, Point const b, Point const c, Point const point);
Fixed is_inside(Point &p, Point &a, Point &b);

std::ostream& operator<<(std::ostream &os, const Point &p);

#endif
