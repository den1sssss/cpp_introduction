// #include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog constructor" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor" << std::endl;
}

Dog::Dog(const Dog &src)
{
    *this = src;
    std::cout << "Dog copy constructor"<< std::endl;
}

Dog & Dog::operator=(const Dog &arg)
{
    if(this != &arg)
        this->type=arg.type;
    std::cout <<"Dog copy assigment operator" << this->type << std::endl;
    return(*this);
}

// std::string Dog::getType() const
// {
    // return type;
// }
void Dog::makeSound() const
{
    std::cout << "woof!"<<std::endl;
}

Brain *Dog::getBrain() const
{
    return this->brain;
}

