/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:10:50 by dshirely          #+#    #+#             */
/*   Updated: 2022/10/03 14:10:50 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : vector(std::vector<int>()), size(0), i(0)
{

}

Span::~Span()
{

}
Span::Span(unsigned int N) : vector(std::vector<int>()), size(N), i (0) 
{
    
}
Span::Span(const Span &src)
{
    vector = src.vector;
    size = src.size;
    i = src.i;
    *this = src;
}
Span &Span::operator=(const Span &src)
{
    vector = std::vector<int>(src.vector);
    return *this;
}
void Span::addNumber(int n)
{
    if(i < size)
    {
        vector.push_back(n);
        i++;
    }
    else
        throw  NotEnoughSpace();
}
int Span::shortestSpan()
{
    int result;
    unsigned int j;
    int diff;

    if(size < 2)
        throw LessThanTwo();
    result = INT_MAX;
    std::sort(vector.begin(),vector.end());
    for(unsigned int i = size - 1; i > 0; i--)
    {
        for(j = i; j > 0; j--)
        {
            diff = vector[i] - vector[j - 1];
            if(diff < 0)
                diff*=-1;
            if(diff < result)
                result = diff;
        }
    }
    return (result);
}
int Span::longestSpan()
{
    int result;
    unsigned int j;
    int diff;

    if(size < 2)
        throw LessThanTwo();
    result = 0;
    std::sort(vector.begin(),vector.end());
    for(unsigned int i = size - 1; i > 0; i--)
    {
        for(j = i; j > 0; j--)
        {
            diff = vector[i] - vector[j - 1];
            if(diff < 0)
                diff*=-1;
            if(diff > result)
                result = diff;
        }
    }
    return (result);
}
void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    for(std::vector<int>::iterator iter = begin; iter != end; iter++)
    {
        vector.push_back(*iter);
        i++;
    }   
    if(i > size)
        throw NotEnoughSpace();
}
const char *Span::LessThanTwo::what() const throw()
{
    return("Here is less than two elements!");
}
const char *Span::NotEnoughSpace::what() const throw()
{
    return("Here is not enough space!");
}