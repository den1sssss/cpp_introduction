#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor" << std::endl;
}
Brain::~Brain()
{
    std::cout << "Brain destructor" << std::endl;
}
Brain::Brain(const Brain &src)
{
    std::cout << "Brain copy constructor" << std::endl;
}
Brain &Brain::operator=(const Brain &a)
{
    int i = 0;

    while(i < 100)
    {
        this->ideas[i] = a.ideas[i];
        i++;
    }   
    std::cout << "Brain copy assigment operator" << std::endl;
    return (*this);
}