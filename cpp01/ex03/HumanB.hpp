#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name, Weapon &weapon);
		HumanB(std::string name);
		void attack();
		void setWeapon(Weapon &weapon);
	private:
		Weapon *_weapon;
		std::string _name;
};


#endif 