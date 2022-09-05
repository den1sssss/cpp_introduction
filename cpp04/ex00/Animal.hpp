#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        ~Animal();
        Animal(const Animal &src);
        Animal &operator=(const Animal &arg);    
        std::string getTyoe() const;
        virtual void makeSound() const;
};

#endif