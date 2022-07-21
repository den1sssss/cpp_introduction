#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie
{
	public:
		Zombie(std::string _name);
		// void set_name(std::string name);
		void announce(void);
		void randomChump(std::string name);
		Zombie *newZombie(std::string name);
		void killZombie(void);
private:
	std::string _name;
};

#endif 