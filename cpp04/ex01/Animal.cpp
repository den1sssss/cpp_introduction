/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:38:22 by dshirely          #+#    #+#             */
/*   Updated: 2022/09/13 17:56:00 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor" << std::endl;
}

Animal::Animal(const Animal &src)
{
    *this = src;
    std::cout << "Animal copy constructor"<< std::endl;
}

Animal & Animal::operator=(const Animal &arg)
{
    if(this != &arg)
        this->type=arg.type;
    std::cout <<"Animal copy assigment operator" << type << std::endl;
    return(*this);
}

std::string Animal::getType() const
{
    return type;
}

void Animal::makeSound() const
{
    std::cout << "I`m not a cat or dog. I`m just an Animal!"<<std::endl;
}

// Brain *Animal::getBrain() const
// {
    
// }