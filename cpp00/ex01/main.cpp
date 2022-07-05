#include "main.hpp"

int	main(void)
{
	PhoneBook phonebook;
	std::string	str;

	std::cout << "Welcome to your PhoneBook!" << std::endl;
			std::cout << "What would you like to do?" << std::endl;
		std::cout << "(ADD, SEARCH, EXIT)" << std::endl;

	while (str != "EXIT")
	{
		std::cout << "> ";
		getline(std::cin, str);
		if (str == "ADD")
			phonebook.add();
		else if (str == "SEARCH")
		{
			if(phonebook.search())
				{
					std::cout << "CHOOSE CONTACT ID: " << std::endl;
					std::cin >> str;
					try
					{
						phonebook.view_contact(std::stoi(str));
					}
					catch(...)
					{
						std::cout << "INCORRECT INDEX" << std::endl;
					}
				}
		}
		else if (str == "EXIT")
			break;
		else
			std::cout << "(ADD, SEARCH, EXIT)" << std::endl;
	}
	std::cout << "GOODBYE" << std::endl;
	return (0);
}