#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _hp = 100;
    _mana = 100;
    _damage = 30;
    std::cout << _name << "Default constructor called!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << _name << "Destructor called!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src)
{
    *this = src;
    std::cout << "Copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &newValue)
{
    std::cout << "ScavTrap assignement operator called" << std::endl;
    _name = newValue._name;
    _hp = newValue._hp;
    _mana = newValue._mana;
    _damage = newValue._damage;
    return *this;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap request: High fives" << std::endl;
}
