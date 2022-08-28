#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &a);
        Fixed &operator = (const Fixed &a);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        //
        float toFloat(void) const;
        int toInt(void) const;
        Fixed(const int num);
        Fixed(const float num);
    
    private:
        int value;
        const static int fractBits = 8;
};

std::ostream &operator<<(std::ostream &stream, Fixed const &number);

#endif 