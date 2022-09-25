#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() 
: Form("PresidentialPardonForm", 25, 5), target("none") 
{

}
PresidentialPardonForm::~PresidentialPardonForm()
{

}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src)
 : Form("PresidentialPardonForm", 25, 5)
{
    *this = src;
}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
    this->target = src.getTarget();
    return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) 
: Form("PresidentialPardonForm", 25, 5), target(target) 
{

}
std::string PresidentialPardonForm::getTarget() const
{
    return (this->target);
}

void PresidentialPardonForm::execute(Bureaucrat const &exec) const
{
    if(exec.getGrade() <= getGradeExecute())
        std::cout << this->target << " has been pardoned by Zaphod Beelbrox" <<std::endl;
    else
        throw GradeTooLowToExecute();
}