/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:24:36 by dshirely          #+#    #+#             */
/*   Updated: 2022/09/25 16:27:06 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    this->DogBrain = new Brain();
    std::cout << "Dog default constructor" << std::endl;
}

Dog::~Dog()
{
    delete this->DogBrain;
    std::cout << "Dog destructor" << std::endl;
}

Dog::Dog(const Dog &src)
{
    *this = src;
    this->DogBrain = new Brain();
    *(this->DogBrain) = *(src.DogBrain);
    std::cout << "Dog copy constructor"<< std::endl;
}

Dog & Dog::operator=(const Dog &arg)
{
    this->type=arg.getType();
    this->DogBrain = new Brain();
    *(this->DogBrain) = *(arg.DogBrain);
    std::cout <<"Dog copy assigment operator = " << this->type << std::endl;
    return(*this);
}

void Dog::makeSound() const
{
    std::cout << "woof!"<<std::endl;
}
