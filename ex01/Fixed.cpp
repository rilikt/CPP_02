/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:11:53 by timschmi          #+#    #+#             */
/*   Updated: 2024/12/01 15:42:40 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int Fixed::getRawBits(void) const
{
    // std::cout << B << "getRawBits member function called" << R << std::endl;
    return (i);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << B << "setRawBits member function called" << R << std::endl;
    this->i = raw;
}

Fixed::Fixed(void)
{
    std::cout << G << "Default Constructor called" << R << std::endl;
    this->i = 0;  
}

Fixed::Fixed(int value)
{
    std::cout << G << "Int Constructor called" << R << std::endl;
    this->i = value << j;
}

Fixed::Fixed(float value)
{
    std::cout << G << "Float Constructor called" << R << std::endl; 
    this->i = roundf(value * (1 << j)); // using round here adds more precision because regular casting always rounds down
}

float Fixed::toFloat(void) const
{
    return ((float)i / (1 << j));
}

int Fixed::toInt(void) const
{
    return (int)(i >> j);
}

std::ostream& operator<<(std::ostream &os, const Fixed &fixed)
{
    os << fixed.toFloat();
    return os;
}

Fixed::~Fixed(void)
{
    std::cout << Ro << "Destructor called" << R << std::endl;
} 

Fixed::Fixed(const Fixed &other)
{
    std::cout << G << "Copy Constructor called" << R << std::endl;
    this->i = other.getRawBits();
}

Fixed& Fixed::operator=(const Fixed &other)
{
    if (this == &other)
        return *this;

    std::cout << G << "Copy assignment operator called" << R << std::endl;
    this->i = other.getRawBits();

    return *this;
}
