#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("WrongAnimal")
{
    std::cout << "WrongAnimal default constructor" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
    *this = src;
    std::cout << "WrongAnimal copy constructor"<< std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &arg)
{
    // if(this != &arg)
    //     this->type=arg.type;
    this->type=arg.getType();
    std::cout <<"WrongAnimal copy assigment operator" << std::endl;
    return(*this);
}

std::string WrongAnimal::getType() const
{
    return type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "I`m not a cat or dog. I`m just a WrongAnimal!"<<std::endl;
}
