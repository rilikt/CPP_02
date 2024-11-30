/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 12:40:34 by timschmi          #+#    #+#             */
/*   Updated: 2024/11/30 14:10:51 by timschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed 
{
    private:
        int i;
        static const int j = 8;
    
    public:
        Fixed(void);    // Default constructor
        Fixed(const Fixed &other);  // Copy constructor
        void operator=(const Fixed &other); // Copy assignment operator
        ~Fixed(void);   // Destructor

        int getRawBits(void) const; // const functions cant alter class variables 
        void setRawBits(int const raw);
};

#endif
