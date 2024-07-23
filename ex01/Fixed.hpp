#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private :
        int value;
        static const int fractionalBits = 8;
    public :
        Fixed();
        Fixed(const Fixed &fixed);
        ~Fixed();
        Fixed(const int value);
        Fixed(const float value);
        float toFloat(void) const;
        int toInt(void) const;
        Fixed &operator=(const Fixed &fixed);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
#endif