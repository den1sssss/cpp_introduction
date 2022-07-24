#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
	_weapon = &weapon;
	_name = name;
}
void HumanA::attack()
{
	std::cout << _name << " attacks with their " << _weapon->getType();
	std::cout << std::endl;
}