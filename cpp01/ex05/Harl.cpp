#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "[DEBUG]"<< std::endl;	
}
void	Harl::info(void)
{
	std::cout << "[INFO]"<< std::endl;	
}
void	Harl::warning(void)
{
	std::cout << "[WARNING]"<< std::endl;	
}
void	Harl::error(void)
{
	std::cout << "[ERROR]"<< std::endl;	
}

Harl::arrOfFunc Harl::arr[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

void	Harl::complain( std::string level )
{
	std::string all[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i;

	for (i = 0; level != all[i] && i < 4; i++){}
	switch (i)
	{
		case 4:
			std::cout << "[ Well, it is not a complain at all ]" << std::endl;
			break;
		default:
			(this->*arr[i])();
			break;
	}
}