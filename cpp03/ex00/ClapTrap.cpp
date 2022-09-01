#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{

}

ClapTrap::~ClapTrap()
{
    
}

ClapTrap::ClapTrap(std::string name): _name(name), _hp(10), _mana(10), _damage(0)
{

}

ClapTrap::ClapTrap(const ClapTrap &arg)
{
    *this = arg;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &arg)
{
	_name = arg._name;
	_hp = arg._hp;
	_mana = arg._mana;
	_damage = arg._damage;
	return *this;
}

void ClapTrap::attack(const std::string & target)
{

}

void ClapTrap::takeDamage(unsigned int amount)
{

}

void ClapTrap::beRepaired(unsigned int amount)
{

}

