/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:10:51 by dshirely          #+#    #+#             */
/*   Updated: 2022/10/03 14:10:52 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <exception>
#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>

class Span
{
    private:
        std::vector<int> vector;
        unsigned int size;
        unsigned int i;
    public:
        Span();
        Span(unsigned int N);
        ~Span();
        Span(const Span &src);
        Span &operator=(const Span &src);

        int shortestSpan(void);
        int longestSpan(void);
        class NotEnoughSpace : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class LessThanTwo : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        void addNumber(int n);
        void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};

#endif