// #include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    this->DogBrain = new Brain();
    std::cout << "Dog default constructor" << std::endl;
}

Dog::~Dog()
{
    delete this->DogBrain;
    std::cout << "Dog destructor" << std::endl;
}

Dog::Dog(const Dog &src)
{
    *this = src;
    this->DogBrain = new Brain();
    *(this->DogBrain) = *(src.DogBrain);
    std::cout << "Dog copy constructor"<< std::endl;
}

Dog & Dog::operator=(const Dog &arg)
{
    // if(this != &arg)
    //     this->type=arg.type;
    this->type=arg.getType();
    this->DogBrain = new Brain();
    *(this->DogBrain) = *(arg.DogBrain);
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
