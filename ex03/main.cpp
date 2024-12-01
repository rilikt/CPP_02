/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:31:24 by timschmi          #+#    #+#             */
/*   Updated: 2024/12/01 15:50:08 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) 
{
    Point a, b(4, 0), c(2, 3);
    Point p (2, 1); // inside
    Point e (2, 0); // on the edge
    Point o (5, 1); // outside

    if (bsp(a, b, c, p))
        std::cout << Y << "Point p lies within the triangle" << R << std::endl;
    else
        std::cout << Y << "Point p lies outside the triangle" << R << std::endl;
    
    if (bsp(a, b, c, e))
        std::cout << Y << "Point e lies within the triangle" << R << std::endl;
    else
        std::cout << Y << "Point e lies outside the triangle" << R << std::endl;
    
    if (bsp(a, b, c, o))
        std::cout << Y << "Point o lies within the triangle" << R << std::endl;
    else
        std::cout << Y << "Point o lies outside the triangle" << R << std::endl;
    
    return(0);
}
