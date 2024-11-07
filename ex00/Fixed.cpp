#include "Fixed.hpp"

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
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

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
} 

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy Constructor called" << std::endl;
    this->i = other.getRawBits();
}

void Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->i = other.getRawBits();
}

