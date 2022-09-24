#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{

}
Bureaucrat::~Bureaucrat()
{

}
Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
    grade = src.getGrade();
}
Bureaucrat& Bureaucrat::operator=(Bureaucrat const &src)
{
    grade = src.getGrade();
    return (*this);
}
Bureaucrat::Bureaucrat(const std::string name, int grade)
{

}
std::string const Bureaucrat::getName() const
{

}

int Bureaucrat::getGrade() const
{

}

void Bureaucrat::increase()
{

}

void Bureaucrat::decrease()
{

}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade too high!";
}
const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade too low!";
}
std::ostream &operator<<(std::ostream &cout, Bureaucrat const &src)
{
    
}