#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    public:

        Fixed();
        ~Fixed();
        
        bool operator>(Fixed const & op) const;    
        bool operator<(Fixed const & op) const;    
        bool operator>=(Fixed const & op) const;    
        bool operator<=(Fixed const & op) const;    
        bool operator==(Fixed const & op) const;    
        bool operator!=(Fixed const & op) const;

        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;


        Fixed operator+(const Fixed& op) const;
        Fixed operator-(const Fixed& op) const;
        Fixed operator*(const Fixed& op) const;
        Fixed operator/(const Fixed& op) const;

        Fixed & operator++(void);
        Fixed operator++(int);      
        Fixed & operator--(void);     
        Fixed operator--(int);


    private:
        int value;
        const static int fractBits = 8;

};

std::ostream &operator<<(std::ostream &stream, Fixed const &number);


#endif 