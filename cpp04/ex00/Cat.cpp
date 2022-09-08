// #include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "Cat constructor" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor" << std::endl;
}

Cat::Cat(const Cat &src)
{
    *this = src;
    std::cout << "Cat copy constructor"<< std::endl;
}

Cat & Cat::operator=(const Cat &arg)
{
    if(this != &arg)
        this->type=arg.type;
    std::cout <<"Cat copy assigment operator" << type << std::endl;
    return(*this);
}

// std::string Cat::getType() const
// {
    // return type;
// }
void Cat::makeSound() const
{
    std::cout << "meow!"<<std::endl;
}
