#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <fstream>
class Form;
class Bureaucrat;

class ShrubberyCreationForm : public Form
{
    private:
        std::string target;
    public:
        ShrubberyCreationForm();
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm &src);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &src);

        ShrubberyCreationForm(std::string target);
        std::string getTarget() const;
        void execute(Bureaucrat const &exec) const;

};

#endif