/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:38:22 by dshirely          #+#    #+#             */
/*   Updated: 2022/09/24 19:29:52 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal")
{
    std::cout << "AAnimal default constructor" << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor" << std::endl;
}

AAnimal::AAnimal(const AAnimal &src)
{
    *this = src;
    std::cout << "AAnimal copy constructor"<< std::endl;
}

AAnimal & AAnimal::operator=(const AAnimal &arg)
{
    this->type=arg.getType();
    std::cout <<"AAnimal copy assigment operator" << type << std::endl;
    return(*this);
}

std::string AAnimal::getType() const
{
    return (this->type);
}

void AAnimal::makeSound() const
{
    std::cout << "I`m not a cat or dog. I`m just an AAnimal!"<<std::endl;
}
