#include "iter.hpp"

void toUpper(char &c)
{
    std::cout<< char(c -32);
}

int main(void)
{
    char str[]={'a','b','o','b','a'};
    std::string strs[]={"aboba","kek","lol","ROFL","HELLO"};
    int arr[]={1,2,3,4,5};

    ::iter(str,5,toUpper);
    std::cout << std::endl;
    ::iter(strs,5,printTab);
    std::cout << std::endl;
    ::iter(arr,5,printTab);
}