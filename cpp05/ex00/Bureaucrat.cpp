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
Bureaucrat::Bureaucrat(const std::string name, int grade):name(name),grade(grade)
{
    if(getGrade() < 1)
        throw Bureaucrat::GradeTooHighException();
    if(getGrade() > 150)
        throw Bureaucrat::GradeTooLowException();
}
std::string const Bureaucrat::getName() const
{
    return name;
}

int Bureaucrat::getGrade() const
{
    return grade;
}

void Bureaucrat::increase()
{
    grade++;
}

void Bureaucrat::decrease()
{
    grade--;
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
    cout << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;   
    return cout;
}