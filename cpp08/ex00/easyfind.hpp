/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:10:41 by dshirely          #+#    #+#             */
/*   Updated: 2022/10/03 14:10:42 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <exception>
#include <list>
#include <vector> 
#include <string.h>

class ValueNotFound : public std::exception
{
    public:
        virtual const char * what() const throw();
};

const char* ValueNotFound::what(void) const throw()
{
    return("Value not found!");
}


template <typename T>
void easyfind(T container, int n)
{
    typename T::iterator i;

    i = std::find(container.begin(), container.end(), n);
    if(i == container.end())
        throw ValueNotFound();
    else
        std::cout <<"Value ["<< n << "] found!" << std::endl;
}
#endif