/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:31:09 by timschmi          #+#    #+#             */
/*   Updated: 2024/12/01 15:43:21 by timschmi         ###   ########.fr       */
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
    // std::cout << B << "setRawBits member function called" << R << std::endl;
    this->i = raw;
}

Fixed::Fixed(void)
{
    // std::cout << G << "Default Constructor called" << R << std::endl;
    this->i = 0;  
}

Fixed::Fixed(int value)
{
    // std::cout << G << "Int Constructor called" << R << std::endl;
    this->i = value << j;
}

Fixed::Fixed(float value)
{
    // std::cout << G << "Float Constructor called" << R << std::endl; 
    this->i = roundf(value * (1 << j)); // using round here adds more precision because regular casting always rounds down
}

float Fixed::toFloat(void) const
{
    // std::cout << "to float conversion" << std::endl;
    float re = (float)this->i / (float)(1 << j);
    return (re);
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
    // std::cout << Ro << "Destructor called" << R << std::endl;
} 

Fixed::Fixed(const Fixed &other)
{
    // std::cout << G << "Copy Constructor called" << R << std::endl;
    this->i = other.getRawBits();
}

Fixed& Fixed::operator=(const Fixed &other)
{
    if (this == &other)
        return *this;

    // std::cout << G << "Copy assignment operator called" << R << std::endl;
    this->i = other.getRawBits();

    return *this;
}

// ex02
float Fixed::operator*(const Fixed &b)
{
    float fre = (this->toFloat() * b.toFloat()) + 0.0f; // adding the + 0.0f seems so stupid, float constructor doesn't recognize otherwise
    // std::cout << "Multiplication operator overload: " << this->toFloat() << " * " << b.toFloat() << " = " << fre << std::endl;
    return (fre);
}

float Fixed::operator+(const Fixed &b)
{
    float fre = (this->toFloat() + b.toFloat()) + 0.0f;
    return(fre);
}

float Fixed::operator-(const Fixed &b)
{
    float fre = (this->toFloat() - b.toFloat()) + 0.0f;
    return(fre);
}

float Fixed::operator/(const Fixed &b)
{
    float fre = (this->toFloat() / b.toFloat()) + 0.0f;
    return(fre);
}

bool Fixed::operator>(const Fixed &b) const
{
    if (this->i > b.i)
        return(true);
    else
        return(false);
}

bool Fixed::operator<(const Fixed &b) const
{
    if (this->i < b.i)
        return(true);
    else
        return(false);
}

bool Fixed::operator>=(const Fixed &b) const
{
    if (this->i >= b.i)
        return(true);
    else
        return(false);
}

bool Fixed::operator<=(const Fixed &b) const
{
    if (this->i <= b.i)
        return(true);
    else
        return(false);
}

bool Fixed::operator==(const Fixed &b) const
{
    if (this->i == b.i)
        return(true);
    else
        return(false);
}

bool Fixed::operator!=(const Fixed &b) const
{
    if (this->i != b.i)
        return(true);
    else
        return(false);
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return(a);
    else
        return(b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a < b)
        return(a);
    else
        return(b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return(a);
    else
        return(b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a > b)
        return(a);
    else
        return(b);
}

// in- decrement
Fixed& Fixed::operator++()
{
    ++i;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    ++i;
    return temp;
}

Fixed& Fixed::operator--()
{
    --i;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed temp (*this);
    --i;
    return temp;
}
