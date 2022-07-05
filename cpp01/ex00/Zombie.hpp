#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>

class Zombie
{
	public:
	// Contact(std::string first_name = "", std::string last_name = "",\
	// std::string nickname = "", std::string phone_number = "", std::string darkest_secret = "");

	// std::string get_first_name();
	// std::string get_last_name();
	// std::string get_nickname();
	// std::string get_phone_number();
	// std::string get_darkest_secret();
		void announce(void);
private:
	std::string _name;
};

#endif 