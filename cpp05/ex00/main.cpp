#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat bur1("Denis",1);
        Bureaucrat bur2("Andrew", 50);

        bur1.decrease();
        std::cout << bur1 << std::endl;

        bur2.increase();
        std::cout << bur2 << std::endl;


        Bureaucrat bur3("Aboba",0);
        std::cout << bur3 << std::endl;

        Bureaucrat bur4("Nedoidet",12);
        std::cout << bur4 << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
       
}