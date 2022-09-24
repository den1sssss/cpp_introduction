#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
// #include <exception>

class Form
{
    private:
        std::string name;
        bool sign;
        int gradeToSign;
        int gradeToExec;
    public:
        Form();
        ~Form();
        Form(Form const &src);
        Form &operator=(Form const &src);
        Form(std::string const &src, const int gradeToSign, int gradeToExec);
        int getGradeSignature() const;
        int getGradeExecute() const;
        std::string const getName() const;
        bool getSign() const;
        void beSigned(Bureaucrat &src);
        class GradeTooHighException: public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        class GradeTooLowException: public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

};
std::ostream &operator<<(std::ostream &cout, Form const &src);


#endif