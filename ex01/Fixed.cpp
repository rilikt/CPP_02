/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:11:53 by timschmi          #+#    #+#             */
/*   Updated: 2024/11/30 15:18:59 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return (i);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->i = raw;
}

Fixed::Fixed(void)
{
    std::cout << "Default Constructor called" << std::endl;
    this->i = 0;  
}

Fixed::Fixed(int value)
{
    std::cout << "Int Constructor called" << std::endl;
    this->i = value << j;
    // std::cout << i << std::endl;
}

Fixed::Fixed(float value)
{
    std::cout << "Float Constructor called" << std::endl; 
    this->i = roundf(value * (1 << j)); // using round here adds more precision because regular casting always rounds down
    // std::cout << i << std::endl;
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
    std::cout << "Destructor called" << std::endl;
} 

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy Constructor called" << std::endl;
    this->i = other.getRawBits();
}

Fixed& Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->i = other.getRawBits();

    return *this;
}
