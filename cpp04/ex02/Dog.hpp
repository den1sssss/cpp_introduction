#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    public:
        Dog();
        virtual ~Dog();
        Dog(const Dog &src);
        Dog &operator=(const Dog &arg);
        void makeSound() const;
    protected:
        Brain *DogBrain;
};

#endif