#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &a);
        Fixed &operator = (const Fixed &a);
        int getRawBits(void) const;
        void setRawBits(int const raw);

    private:
        int value;
        const static int _fractBits = 8;
};

#endif 