/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:32:24 by dshirely          #+#    #+#             */
/*   Updated: 2022/10/01 17:34:21 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
#include <iostream>
#include <string.h>

template<typename T>
void iter(T *str, int size, void func(T &a))
{
    int i = 0;
    while(i<size)
        func(str[i++]);
}

template< typename T >
void	addSpace(T &str)
{
	std::cout << str << " ";
}

void toUpper(char &c)
{
    if(c >=97 && c <= 122) 
        c-=32;
    std::cout<< char(c);
}

#endif