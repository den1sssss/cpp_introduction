#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	public:
		Zombie(std::string _name);
		void set_name(std::string name);
		void announce(void);
		void randomChump(std::string name);
		Zombie *newZombie(std::string name);
		~Zombie();
		Zombie();
private:
	std::string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif 