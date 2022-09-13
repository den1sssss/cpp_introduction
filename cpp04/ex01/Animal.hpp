/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:38:20 by dshirely          #+#    #+#             */
/*   Updated: 2022/09/13 17:55:16 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        ~Animal();
        Animal(const Animal &src);
        Animal &operator=(const Animal &arg);    
        std::string getType() const;
        virtual void makeSound() const;
        virtual Brain *getBrain() const = 0;
};

#endif