#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook{
	Contact contacts[8];
public:
	PhoneBook();
	void add();
	int search();
	void view_contact(int index);
private:
	int current_id;
	int contact_count;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
	std::string formate_string(std::string to_format);
};

#endif 