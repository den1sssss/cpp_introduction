#ifndef SPAN_HPP
# define SPAN_HPP

#include <exception>
#include <iostream>
#include <vector>

class Span
{
    private:

    public:
        Span();
        Span(unsigned int N);
        ~Span();
        Span(const Span &src);
        Span &operator=(const Span &src);

        void addNumber(int n);
        int shortestSpan(void);
        int longestSpan(void);
        class NotEnoughSpace : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};

#endif