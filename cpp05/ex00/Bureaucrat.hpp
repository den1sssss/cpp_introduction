#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP


#include <iostream>
#include <exception>


class Bureaucrat
{
    private:
        std::string name;
        int         grade;
    public:
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(Bureaucrat const &src);
        Bureaucrat &operator=(Bureaucrat const &src);
        Bureaucrat(const std::string name, int grade);
        std::string const getName() const;
        int getGrade() const;

        void increase();
        void decrease();
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

std::ostream &operator<<(std::ostream &cout, Bureaucrat const &src);


#endif