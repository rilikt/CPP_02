#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

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
        void operator=(const Fixed &other); // Copy assignment operator

        friend std::ostream& operator<<(std::ostream &os, const Fixed &fixed);
        ~Fixed(void);   // Destructor


        int getRawBits(void) const; // const functions cant alter class variables 
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;

};


#endif