/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:32:22 by dshirely          #+#    #+#             */
/*   Updated: 2022/10/01 17:32:23 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
#include <iostream>
#include <string.h>

template<typename T>
void swap(T &a, T &b)
{
    T temp;

    temp = a;
    a = b;
    b = temp;
}

template<typename T>
T min(T &a,T &b)
{
    if(a<=b)
        return(a);
    else
        return(b);
}

template<typename T>
T max(T &a,T &b)
{
    if(a>=b)
        return(a);
    else
        return(b);
}

#endif