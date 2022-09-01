/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denis <denis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 10:53:58 by denis             #+#    #+#             */
/*   Updated: 2022/08/30 10:54:42 by denis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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