#include "iter.hpp"

void toUpper(char &c)
{
    // return(c+32);
    std::cout<< char(c -32);
}

int main(void)
{
    char str[]={'a','b','o','b','a'};
    ::iter(str,5,toUpper);
}