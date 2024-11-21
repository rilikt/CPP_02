/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: h4ns <h4ns@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:31:24 by timschmi          #+#    #+#             */
/*   Updated: 2024/11/21 18:34:42 by h4ns             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) 
{
    Point a, b(4, 0), c(2, 3);
    Point p (2, 1); // inside
    Point e (2, 0); // on the edge
    Point o (5, 1); // outside

    if (bsp_triangle(p, a, b, c))
        std::cout << "Point p lies within the triangle" << std::endl;
    else
        std::cout << "Point p lies outside the triangle" << std::endl;
    
    if (bsp_triangle(e, a, b, c))
        std::cout << "Point e lies within the triangle" << std::endl;
    else
        std::cout << "Point e lies outside the triangle" << std::endl;
    
    if (bsp_triangle(o, a, b, c))
        std::cout << "Point o lies within the triangle" << std::endl;
    else
        std::cout << "Point o lies outside the triangle" << std::endl;
    
    return(0);
}