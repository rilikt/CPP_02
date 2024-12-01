/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 14:12:16 by timschmi          #+#    #+#             */
/*   Updated: 2024/12/01 15:51:23 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Point.hpp"

Fixed is_inside(Point const p, Point const a, Point const b)
{
    // cross product calc
    return (p.getx() - a.getx()) * (b.gety() - a.gety()) - (p.gety() - a.gety()) * (b.getx() - a.getx());
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed r1, r2, r3; // result one two and three
    bool pos, neg;

    // calculating if the point is on the "inside" of all three lines forming the triangle

    r1 = is_inside(point, a, b);
    r2 = is_inside(point, b, c);
    r3 = is_inside(point, c, a);

    pos = (r1 >= 0 && r2 >= 0 && r3 >= 0);
    neg = (r2 <= 0 && r2 <= 0 && r3 <= 0);

    return pos || neg;
}
