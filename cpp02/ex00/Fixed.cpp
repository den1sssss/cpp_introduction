/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denis <denis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 10:54:08 by denis             #+#    #+#             */
/*   Updated: 2022/08/30 10:54:08 by denis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->value = 0;
}

Fixed::Fixed(const Fixed &a)
{
    std::cout << "Copy constructor called" << std::endl;
    this->value = a.getRawBits();
}

Fixed::~Fixed()
{ 
    std::cout << "Destructor called" << std::endl; 
}

Fixed & Fixed::operator=(const Fixed &a)
{
    // std::cout << "Assignation operator called" << std::endl;
    std::cout << "Copy assigment operator called" << std::endl;
    if (this == &a)
        return (*this);
    this->value = a.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->value);
}

void Fixed::setRawBits(int const raw) 
{
    this->value = raw; 
}