#include "Form.hpp"
Form::Form()
{

}
Form::~Form()
{

}
Form::Form(Form const &src)
{
    gradeToSign = src.getGradeSignature();
    gradeToExec = src.getGradeExecute();
    sign = src.getSign();
}
Form& Form::operator=(Form const &src)
{
    gradeToSign = src.getGradeSignature();
    gradeToExec = src.getGradeExecute();
    sign = src.getSign();
    return (*this);
}
Form::Form(std::string const &src, const int gradeToSign, int gradeToExec):
    name(src),
    sign(false),
    gradeToSign(gradeToSign),
    gradeToExec(gradeToExec)
{
    if (getGradeSignature() < 1 || getGradeExecute() < 1){
		throw Form::GradeTooHighException();
	}
	else if (getGradeSignature() > 150 || getGradeExecute() > 150){
		throw Form::GradeTooLowException();
	}
}
std::string const Form::getName() const
{
    return name;
}

// int Form::getGrade() const
// {
//     return grade;
// }

// void Form::increase()
// {
//     grade++;
// }

// void Form::decrease()
// {
//     grade--;
// }

int Form::getGradeSignature() const
{
    return gradeToSign;
}
int Form::getGradeExecute() const 
{
    return gradeToExec;
}
bool Form::getSign() const
{
    return sign;
}
void Form::beSigned(Bureaucrat &src)
{
    if(src.getGrade() <= getGradeSignature())
        sign = true;
    else
        throw Bureaucrat::GradeTooLowException();
}
const char *Form::GradeTooHighException::what() const throw()
{
    return "Grade too high to sign!";
}
const char *Form::GradeTooLowException::what() const throw()
{
    return "Grade too low to sign!";
}
std::ostream &operator<<(std::ostream &cout, Form const &src)
{
    cout << src.getName() << std::endl;
    cout << "Grade needed to sign: " << src.getGradeSignature() << std::endl;
    cout << "Grade needed to execute: " << src.getGradeExecute() << std::endl;
    cout << std::endl;
    return cout;
}

const char *Form::GradeTooHighToExecute::what(void) const throw()
{
	return ("Grade is too high to execute");
}

const char *Form::GradeTooLowToExecute::what(void) const throw()
{
	return ("Grade is too low to execute");
}



