/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:43:00 by timschmi          #+#    #+#             */
/*   Updated: 2024/11/09 16:04:04 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// Point::Point()
// {
// 	x.setRawBits(0);
// 	y.setRawBits(0);
// }

std::ostream& operator<<(std::ostream &os, const Point &p)
{
	os << p.x.toFloat() << " | " << p.y.toFloat();

	return os;
}