#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
	public:
		const std::string &getType();
		Weapon(std::string type);
		void setType(std::string type);
	private:
		std::string _type;
};


#endif 