#include "Zombie.hpp"

int main(void)
{
	Zombie *zombies;
	zombies = zombieHorde(5,"Denis");
	delete[] zombies;
}