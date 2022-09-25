/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:24:14 by dshirely          #+#    #+#             */
/*   Updated: 2022/09/25 16:26:16 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog default constructor" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor" << std::endl;
}

Dog::Dog(const Dog &src)
{
    *this = src;
    std::cout << "Dog copy constructor"<< std::endl;
}

Dog & Dog::operator=(const Dog &arg)
{
    this->type=arg.getType();
    std::cout <<"Dog copy assigment operator" << this->type << std::endl;
    return(*this);
}

void Dog::makeSound() const
{
    std::cout << "woof!"<<std::endl;
}
