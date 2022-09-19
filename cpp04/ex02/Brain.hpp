#ifndef BRAIN_HPP 
# define BRAIN_HPP

# include <iostream>
#include "Brain.hpp"
#include "Animal.hpp"

class Brain
{
    public:
        Brain();
        Brain(const Brain &src);
        virtual ~Brain();
        Brain   &operator=(const Brain &a);
    private:
        std::string ideas[100];
};


#endif