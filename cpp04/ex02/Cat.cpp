// #include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    this->CatBrain = new Brain();
    std::cout << "Cat default constructor" << std::endl;
}

Cat::~Cat()
{
    delete this->CatBrain;
    std::cout << "Cat destructor" << std::endl;
}

Cat::Cat(const Cat &src)
{
    *this = src;
    this->CatBrain=new Brain();
    *(this->CatBrain)=*(src.CatBrain);
    std::cout << "Cat copy constructor"<< std::endl;
}

Cat & Cat::operator=(const Cat &arg)
{
    // if(this != &arg)
    //     this->type=arg.type;
    this->type=arg.getType();
    this->CatBrain = new Brain();
    *(this->CatBrain) = *(arg.CatBrain);
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
