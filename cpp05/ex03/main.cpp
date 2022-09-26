/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 20:26:13 by dshirely          #+#    #+#             */
/*   Updated: 2022/09/26 20:26:14 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	Intern intern;
	Form*  nameForm1;
	try
	{
		nameForm1 = intern.makeForm("robotomy request", "Bender");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	Form*  nameForm2;
	try
	{
		nameForm2 = intern.makeForm("RobotomyRequestForm", "Aboba");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	Form*  nameForm3;
	try
	{
		nameForm3 = intern.makeForm("PresidentialPardonForm", "Denis");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	Form*  nameForm4;
	try
	{
		nameForm4 = intern.makeForm("ShrubberyCreationForm", "Andrew");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

