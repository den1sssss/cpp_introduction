#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private:
        FragTrap();
    public:
        FragTrap(std::string name);
        ~FragTrap();
        FragTrap(const FragTrap &src);
        FragTrap &operator=(const FragTrap &newValue);
	    void highFivesGuys();
};

#endif