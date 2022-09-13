#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public:
        Cat();
        ~Cat();
        Cat(const Cat &src);
        Cat &operator=(const Cat &arg);   
        void makeSound() const;
        virtual Brain   *getBrain() const;
    private:
        Brain *brain;
};

#endif