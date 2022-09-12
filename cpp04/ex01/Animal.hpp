/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:38:20 by dshirely          #+#    #+#             */
/*   Updated: 2022/09/10 11:38:04 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

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
};

#endif