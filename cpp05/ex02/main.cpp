/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 20:25:50 by dshirely          #+#    #+#             */
/*   Updated: 2022/09/26 20:25:51 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "Form.hpp"

int main(void)
{
	srand(time(NULL));
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
		
		sarah.decrease();
		sarah.signForm(presidential2);
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------"<<std::endl;
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
	std::cout << "---------------"<<std::endl;
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