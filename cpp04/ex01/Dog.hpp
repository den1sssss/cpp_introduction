#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    public:
        Dog();
        ~Dog();
        Dog(const Dog &src);
        Dog &operator=(const Dog &arg);
        void makeSound() const;
        virtual Brain   *getBrain() const;
    private:
        Brain *brain;
};

#endif