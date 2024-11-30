/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:31:17 by timschmi          #+#    #+#             */
/*   Updated: 2024/11/30 15:40:02 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

#define R "\033[0m"
#define Ro "\033[31m"
#define G "\033[32m"
#define Y "\033[33m"
#define B "\033[34m"

class Fixed 
{
    private:
        int i;
        static const int j = 8;
    
    public:
        Fixed(void);    // Default constructor
        Fixed(int value);
        Fixed(float value);

        Fixed(const Fixed &other);  // Copy constructor
        Fixed& operator=(const Fixed &other); // Copy assignment operator
        
        float operator*(const Fixed &b);
        float operator+(const Fixed &b);
        float operator-(const Fixed &b);
        float operator/(const Fixed &b);

        bool operator>(const Fixed &b) const;
        bool operator<(const Fixed &b) const;
        bool operator>=(const Fixed &b) const;
        bool operator<=(const Fixed &b) const;
        bool operator==(const Fixed &b) const;
        bool operator!=(const Fixed &b) const;

        Fixed& operator++();
        Fixed operator++(int);
        Fixed& operator--();
        Fixed operator--(int);

        /*  overloading member functions allows for different input variables while keeping the same name   */
        static Fixed& min(Fixed &a, Fixed &b); // static member functions can be called without an object
        static const Fixed& min(const Fixed &a, const Fixed &b);
        static Fixed& max(Fixed &a, Fixed &b);
        static const Fixed& max(const Fixed &a, const Fixed &b);

        ~Fixed(void);   // Destructor

        int getRawBits(void) const; // const functions cant alter class variables 
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;

};

std::ostream& operator<<(std::ostream &os, const Fixed &fixed); // Overloaded insertion operator

#endif
