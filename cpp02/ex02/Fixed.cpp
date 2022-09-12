#include "Fixed.hpp"

Fixed::Fixed()
{
    this->value = 0;
}

Fixed::Fixed(const Fixed &a)
{
    this->value = a.getRawBits();
}

Fixed::~Fixed()
{

}

Fixed & Fixed::operator=(Fixed const &a)
{
    if (this == &a)
        return (*this);
    this->value = a.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    return (this->value);
}

void Fixed::setRawBits(int const raw) 
{
    this->value = raw; 
}

float Fixed::toFloat() const
{
    return ((float)value / (1 << fractBits));
}

int Fixed::toInt(void) const
{
    return(value >> 8);
}

Fixed::Fixed(const int num)
{
    value = num << fractBits;
}

Fixed::Fixed(const float num)
{
    value = roundf(num * (1 << fractBits));
}

bool Fixed::operator>(Fixed const & op) const
{
    return(value > op.value);
}
bool Fixed::operator<(Fixed const & op) const
{
     return(value < op.value);
}
bool Fixed::operator>=(Fixed const & op) const
{
     return(value >= op.value);
}
bool Fixed::operator<=(Fixed const & op) const
{
     return(value <= op.value);
}
bool Fixed::operator==(Fixed const & op) const
{
     return(value == op.value);
}
bool Fixed::operator!=(Fixed const & op) const
{
     return(value != op.value);
}
Fixed Fixed::operator+(Fixed const & op) const
{
    Fixed	a;

	a.setRawBits(op.value + value); 
	return(a);
}
Fixed Fixed::operator-(Fixed const & op) const
{
    Fixed	a;

	a.setRawBits(op.value - value); 
	return(a);
}
Fixed Fixed::operator*(Fixed const & op) const
{
    Fixed a;

	a.setRawBits((op.value >> Fixed::fractBits) * value);
	return(a);
}

Fixed Fixed::operator/(Fixed const & op) const
{
    Fixed	a;

	a.setRawBits((value << Fixed::fractBits) * op.value);
	return(a);
}

Fixed &Fixed::operator++(void)
{
    setRawBits(++value);
    return(*this);
}
Fixed Fixed::operator++(int)
{
    Fixed a(*this);
    setRawBits(++value);
    return(a);
}
Fixed &Fixed::operator--(void)
{
    setRawBits(--value);
    return(*this);
}
Fixed Fixed::operator--(int)
{
    Fixed a(*this);
    setRawBits(--value);
    return(a);
}
Fixed &Fixed::min(Fixed &a,Fixed &b)
{
    if (a < b) 
		return (a);
	return (b);
}
Fixed const&Fixed::min(const Fixed &a,const Fixed &b)
{
    if (a < b) 
		return (a);
	return (b);
}
Fixed &Fixed::max(Fixed &a,Fixed &b)
{
    if (a > b) 
		return (a);
	return (b);
}
Fixed const&Fixed::max(const Fixed &a,const Fixed &b)
{
    if (a > b) 
		return (a);
	return (b);
}

std::ostream & operator << (std::ostream &stream, Fixed const & number)
{
    stream << number.toFloat();
	return (stream);
}