/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:24:30 by dshirely          #+#    #+#             */
/*   Updated: 2022/09/25 16:24:31 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain deafult constructor" << std::endl;
}
Brain::~Brain()
{
    std::cout << "Brain destructor" << std::endl;
}
Brain::Brain(const Brain &src)
{
    *this = src;
    std::cout << "Brain copy constructor" << std::endl;
}
Brain &Brain::operator=(const Brain &a)
{
    int i = 0;

    while(i < 100)
    {
        this->ideas[i] = a.ideas[i];
        i++;
    }   
    std::cout << "Brain copy assigment operator" << std::endl;
    return (*this);
}