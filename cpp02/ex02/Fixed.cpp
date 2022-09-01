#include "Fixed.hpp"

Fixed::Fixed()
{
    this->value = 0;
}

Fixed::Fixed(const Fixed &a)
{
    *this = a;
}

Fixed::Fixed(const int a)
{
    this->value = a << this->fractBits;
}

Fixed::Fixed(const float a)
{
    this->value = (int)(roundf(a *(1 << this->fractBits)));
}

Fixed::~Fixed()
{

}

Fixed &Fixed::operator=(const Fixed &op)
{
    if( this != &op)
        this->value = op.getRawBits();
    return (*this);
}