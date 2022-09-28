#ifndef ITER_HPP
# define ITER_HPP
#include <iostream>
#include <string.h>

template<typename T>
void iter(T *str, int size, void func(T &))
{
    int i = 0;
    while(i<size)
        func(str[i++]);
}

#endif