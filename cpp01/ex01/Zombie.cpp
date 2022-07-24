#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	_name = name;
}

void Zombie::announce()
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::randomChump(std::string name)
{
	Zombie zombie(name);
	zombie.announce();
}

Zombie::~Zombie()
{
	std::cout << _name << " died" << std::endl;
}

Zombie *Zombie::newZombie(std::string name)
{
	return (new Zombie(name));
}

void Zombie::set_name(std::string name)
{
	_name = name;
}

Zombie::Zombie()
{
	_name = "";
}