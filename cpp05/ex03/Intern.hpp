/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 20:26:11 by dshirely          #+#    #+#             */
/*   Updated: 2022/09/26 20:26:12 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <exception>

class Intern
{
    public:
        Intern();
        ~Intern();
        Intern(Intern const &src);
        Intern &operator=(Intern const &src);

        Form *makeForm(std::string name, std::string const target);
        class InternCannotCreateForm:public std::exception
        {
            public:
            virtual const char *what() const throw();

        };
};


#endif