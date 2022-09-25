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

       
// // }
// #include "Form.hpp"
// #include "Bureaucrat.hpp"

// int main(void) {
//     try {
//         Form f1 = Form("form1", 10, 5);
//         Bureaucrat b1 = Bureaucrat("Bob", 30);
//         Bureaucrat b2 = Bureaucrat("Jhon", 1);

//         std::cout << f1 << std::endl;

//         b1.signForm(f1);
//         b2.signForm(f1);

//         Form f2 = Form("from2", 0, 5);
//     }
//     catch (std::exception & e) {
//         std::cout << "Exception: " << e.what() << std::endl;
//     }
// }

# include "Bureaucrat.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "Form.hpp"

int main(void)
{
	// srand(time(NULL));
	try
	{
		Bureaucrat				louisa("Louisa", 5); // sign and execute
		Bureaucrat				sarah("Sarah", 25); // sign but cannot execute
		Bureaucrat				victoria("Victoria", 40); // cannot sign or execute
		PresidentialPardonForm	presidential1("Thief");
		PresidentialPardonForm	presidential2("Killer");
		PresidentialPardonForm	presidential3 = presidential1;
		
		std::cout << victoria << std::endl;
		std::cout << sarah << std::endl;
		std::cout << louisa << std::endl;
		std::cout << std::endl;
		
		std::cout << presidential1 << std::endl;
		std::cout << presidential2 << std::endl;
		std::cout << presidential3 << std::endl;
		std::cout << std::endl;
		
		louisa.signForm(presidential1);
		louisa.executeForm(presidential1);
		std::cout << std::endl;
		
		sarah.signForm(presidential2);
		sarah.executeForm(presidential2);
		std::cout << std::endl;
		
		victoria.signForm(presidential3);
		victoria.executeForm(presidential3);
		std::cout << std::endl;
		
		sarah.increase();
		sarah.signForm(presidential2);
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << std::endl;
		Bureaucrat				louisa("Louisa", 14); // sign and execute
		Bureaucrat				sarah("Sarah", 140); // sign but cannot execute
		Bureaucrat				victoria("Victoria", 150); // cannot sign or execute
		ShrubberyCreationForm	shrubbery1("Tree");
		ShrubberyCreationForm	shrubbery2("Flower");
		ShrubberyCreationForm	shrubbery3 = shrubbery1;
		
		std::cout << victoria << std::endl;
		std::cout << sarah << std::endl;
		std::cout << louisa << std::endl;
		std::cout << std::endl;
		
		std::cout << shrubbery1 << std::endl;
		std::cout << shrubbery2 << std::endl;
		std::cout << shrubbery3 << std::endl;
		std::cout << std::endl;
		
		louisa.signForm(shrubbery1);
		louisa.executeForm(shrubbery1);
		std::cout << std::endl;
		
		sarah.signForm(shrubbery2);
		sarah.executeForm(shrubbery2);
		std::cout << std::endl;
		
		victoria.signForm(shrubbery3);
		victoria.executeForm(shrubbery3);
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << std::endl;
		Bureaucrat				louisa("Louisa", 20); // sign and execute
		Bureaucrat				sarah("Sarah", 70); // sign but cannot execute
		Bureaucrat				victoria("Victoria", 80); // cannot sign or execute
		RobotomyRequestForm	robotomy1("zzz");
		RobotomyRequestForm	robotomy2("robot");
		RobotomyRequestForm	robotomy3 = robotomy1;
		
		std::cout << victoria << std::endl;
		std::cout << sarah << std::endl;
		std::cout << louisa << std::endl;
		std::cout << std::endl;
		
		std::cout << robotomy1 << std::endl;
		std::cout << robotomy2 << std::endl;
		std::cout << robotomy3 << std::endl;
		std::cout << std::endl;
		
		louisa.signForm(robotomy1);
		louisa.executeForm(robotomy1);
		louisa.executeForm(robotomy2);
		louisa.executeForm(robotomy3);
		std::cout << std::endl;
		
		sarah.signForm(robotomy2);
		sarah.executeForm(robotomy2);
		std::cout << std::endl;
		
		victoria.signForm(robotomy3);
		victoria.executeForm(robotomy3);
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return (0);
}