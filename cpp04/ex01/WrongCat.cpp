// #include "Animal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "WrongCat constructor" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src)
{
    *this = src;
    std::cout << "WrongCat copy constructor"<< std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat &arg)
{
    if(this != &arg)
        this->type=arg.type;
    std::cout <<"WrongCat copy assigment operator" << type << std::endl;
    return(*this);
}

// std::string WrongCat::getType() const
// {
    // return type;
// }
void WrongCat::makeSound() const
{
    std::cout << "meow!"<<std::endl;
}
