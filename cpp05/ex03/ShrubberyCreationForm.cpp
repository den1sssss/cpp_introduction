/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 20:26:22 by dshirely          #+#    #+#             */
/*   Updated: 2022/09/26 20:26:23 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() 
: Form("ShrubberyCreationForm", 145, 137), target("none") 
{

}
ShrubberyCreationForm::~ShrubberyCreationForm()
{

}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) 
: Form("ShrubberyCreationForm", 145, 137)
{
    *this = src;
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
    this->target = src.getTarget();
    return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) 
: Form("ShrubberyCreationForm", 145, 137), target(target) 
{

}
std::string ShrubberyCreationForm::getTarget() const
{
    return (this->target);
}

void ShrubberyCreationForm::execute(Bureaucrat const &exec) const
{
    	if (exec.getGrade() <= getGradeExecute())
	{
		std::cout << exec.getName() << " draw a tree in the file" << std::endl;
		std::ofstream file(this->target + "_shrubbery");
		std::string line;
		
		line.append("       	  &&& &&  & && \n");
		line.append("		&& &\\/&\\|& ()|/ @, && \n");
		line.append("		&\\/(/&/&||/& /_/)_&/_& \n");
		line.append("	&() &\\/&|()|/&\\/ '% & _&& & \n");
		line.append("	&_\\_&&_\\ |& |&&/&__%_/_& && \n");
		line.append("	&&   && & &| &| /& & % ()& /&& \n");
		line.append("	()&_---()&\\&\\|&&-&&--%---()~ \n");
		line.append("		&&     \\||| \n");
		line.append("				||| \n");
		line.append("				||| \n");
		line.append("				||| \n");
		line.append("		, -=-~  .-^- _ \n");
		
		file << line << std::endl;
		file.close();
	}
	else
		throw GradeTooLowToExecute();
}