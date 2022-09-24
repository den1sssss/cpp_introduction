// #include "Bureaucrat.hpp"

// int main()
// {
//     try
//     {
//         Bureaucrat bur1("Denis",1);
//         Bureaucrat bur2("Andrew", 50);

//         bur1.decrease();
//         std::cout << bur1 << std::endl;

//         bur2.increase();
//         std::cout << bur2 << std::endl;


//         Bureaucrat bur3("Aboba",0);
//         std::cout << bur3 << std::endl;

//         Bureaucrat bur4("Nedoidet",12);
//         std::cout << bur4 << std::endl;

//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << std::endl;
//     }

       
// }
#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(void) {
    try {
        Form f1 = Form("form1", 10, 5);
        Bureaucrat b1 = Bureaucrat("Bob", 30);
        Bureaucrat b2 = Bureaucrat("Jhon", 1);

        std::cout << f1 << std::endl;

        b1.signForm(f1);
        b2.signForm(f1);

        Form f2 = Form("from2", 0, 5);
    }
    catch (std::exception & e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
}