/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 20:25:56 by dshirely          #+#    #+#             */
/*   Updated: 2022/09/26 20:25:56 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() 
: Form("RobotomyRequestForm", 72, 45), target("none") 
{

}
RobotomyRequestForm::~RobotomyRequestForm()
{

}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) 
: Form("RobotomyRequestForm", 72, 45)
{
    *this = src;
}
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
    this->target = src.getTarget();
    return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) 
: Form("RobotomyRequestForm", 72, 45), target(target) 
{

}
std::string RobotomyRequestForm::getTarget() const
{
    return (this->target);
}

void RobotomyRequestForm::execute(Bureaucrat const &exec) const
{
    int	number;

	if (exec.getGrade() <= getGradeExecute())
	{
		number = rand() % 100;
		std::cout << "~(±_±)drilling(±_±)~" << std::endl;
		if (number % 2)
			std::cout << exec.getName() << " has been robotomised ..." << std::endl;
		else
			std::cout << exec.getName() << " failed to be robotomised !" << std::endl;
	}
	else
		throw GradeTooLowToExecute();	
}