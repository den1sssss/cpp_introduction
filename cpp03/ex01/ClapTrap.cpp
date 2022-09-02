#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{

}

ClapTrap::~ClapTrap()
{

}

ClapTrap::ClapTrap(std::string name): _name(name), _hp(10), _mana(10), _damage(1)
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
    if(_hp > 0 && _mana > 0)
        std::cout << "ClapTrap " << _name  << " attacks " << target << ", causig " << _damage << " points of damage!" << std::endl;
    _mana--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    _hp -= amount;
    std::cout << "ClapTrap " << _name << " took " << amount << " damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    // _hp += amount;
    if(_hp > 0 && _mana > 0)
        _hp += amount;
    std::cout << "ClapTrap " << _name << " repaired " << amount << " HP!" << std::endl;
    _mana--;
}

