#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	contact_count = 0;
	current_id = 0;
}

std::string PhoneBook::formate_string(std::string to_format){
	to_format.append("|");
	if (to_format.length() > 11){
		to_format.at(9) = '.';
		to_format.erase(10);
		to_format.append("|");
	}
	return (to_format);
}

void PhoneBook::add(){
	current_id = contact_count;
	if (contact_count >= 8)
	{
		for (int i = 0; i < 7; i++)
		{
			contacts[i] = contacts[i + 1];
		}
		current_id = 7;
	}

	std::cout << "Enter first name: " << std::endl;
	std::cin >> first_name;
	std::cout << "Enter last name: " << std::endl;
	std::cin >> last_name;
	std::cout << "Enter nickname: " << std::endl;
	std::cin >> nickname;
	std::cout << "Enter phone_number: " << std::endl;
	std::cin >> phone_number;
	std::cout << "Enter darkest secret: " << std::endl;
	std::cin >> darkest_secret;
	contacts[current_id] = Contact(first_name, last_name, nickname,\
		phone_number, darkest_secret);
	contact_count++;
}
int PhoneBook::search(){
	if (contact_count > 0){
		std::cout
				<< std::right
				<< std::setw(11)
				<< formate_string((std::string)"Index")
				<< std::right
				<< std::setw(11)
				<<  formate_string((std::string)"First name")
				<< std::right
				<< std::setw(11)
				<<  formate_string((std::string)"Last name")
				<< std::right
				<< std::setw(11)
				<<  formate_string((std::string)"Nickname")
				<< std::endl;

		for (int i = 0; i <= current_id; i++){
			std::cout
					<< std::right
					<< std::setw(11)
					<< formate_string(std::to_string(i))
					<< std::right
					<< std::setw(11)
					<< formate_string(contacts[i].get_first_name())
					<< std::right
					<< std::setw(11)
					<< formate_string(contacts[i].get_last_name())
					<< std::right
					<< std::setw(11)
					<< formate_string(contacts[i].get_nickname())
					<< std::endl;
		}
		return (1);
	}
	else
		std::cout << "THERE ARE NO CONTACTS YET" << std::endl;
	return (0);
}

void PhoneBook::view_contact(int index){
	if (index < contact_count && index < 8){
		std::cout << "First name: " << contacts[index].get_first_name() << std::endl;
		std::cout << "Last name: " << contacts[index].get_last_name() << std::endl;
		std::cout << "Nickname: " << contacts[index].get_nickname() << std::endl;
		std::cout << "Phone number: " << contacts[index].get_phone_number() << std::endl;
		std::cout << "Darkest secret: " << contacts[index].get_darkest_secret() << std::endl;
	}
	else
		std::cout << "THERE IS NO SUCH CONTACT HERE" << std::endl;
}