#ifndef ITER_HPP
# define ITER_HPP

template<typename T>
void swap(T &a, T &b)
{
    T temp;

    temp = a;
    a = b;
    b = temp;
}



#endif