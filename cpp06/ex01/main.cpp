#include "main.hpp"

int main(void)
{
    Data data;
    Data *deserial;
    uintptr_t serial;

    data.digital = 42;
    data.str = "aboba";
    std::cout <<"Data adress: "<< &data << std::endl;
    std::cout <<"Data values:"<<std::endl;
    std::cout <<"Digit: " << data.digital <<std::endl;
    std::cout <<"String: " << data.str <<std::endl;

    serial = serialize(&data);

    deserial = deserialize(serial);
    std::cout <<"New adress: " << &data <<std::endl;
    std::cout <<"Data values:"<<std::endl;
    std::cout <<"Digit: " << data.digital <<std::endl;
    std::cout <<"String: " << data.str <<std::endl;

    return (0);
}