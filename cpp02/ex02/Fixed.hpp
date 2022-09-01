#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    public:

        Fixed();
        Fixed(const Fixed &a);
        Fixed(const int a);
        Fixed(const float a);
        virtual ~Fixed();
        Fixed &operator=(const Fixed& op);

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

        static Fixed &min(Fixed &a, Fixed &b);
        const static Fixed &min(const Fixed &a, const Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        const static Fixed &max(const Fixed &a, const Fixed &b);



    private:
        int value;
        const static int fractBits = 8;

};

Fixed &min(Fixed &a, Fixed &b);
Fixed &max(Fixed &a, Fixed &b);
std::ostream &operator<<(std::ostream &stream, Fixed const &number);


#endif 