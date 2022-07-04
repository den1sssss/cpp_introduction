#include "main.hpp"

int	main(void)
{
	std::string	str;

	std::cout << "Welcome to your PhoneBook!" << std::endl;
			std::cout << "What would you like to do?" << std::endl;
		std::cout << "(ADD, SEARCH, EXIT)" << std::endl;

	while (str != "EXIT")
	{
		std::cout << "> ";
		getline(std::cin, str);
		if (str == "ADD")
			// phonebok.contact_add();
			std::cout << "DOBAVIL" << std::endl;
		else if (str == "SEARCH")
			// phonebook.contacts_search();
			std::cout << "NAWEL" << std::endl;
		else if (str != "EXIT")
			std::cout << "I DON'T GET IT!" << std::endl;
	}
	std::cout << "GOODBYE" << std::endl;
	return (0);
}