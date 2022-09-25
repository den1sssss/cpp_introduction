/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:24:57 by dshirely          #+#    #+#             */
/*   Updated: 2022/09/25 16:27:29 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    this->CatBrain = new Brain();
    std::cout << "Cat default constructor" << std::endl;
}

Cat::~Cat()
{
    delete this->CatBrain;
    std::cout << "Cat destructor" << std::endl;
}

Cat::Cat(const Cat &src)
{
    *this = src;
    this->CatBrain=new Brain();
    *(this->CatBrain)=*(src.CatBrain);
    std::cout << "Cat copy constructor"<< std::endl;
}

Cat & Cat::operator=(const Cat &arg)
{
    this->type=arg.getType();
    this->CatBrain = new Brain();
    *(this->CatBrain) = *(arg.CatBrain);
    std::cout <<"Cat copy assigment operator" << type << std::endl;
    return(*this);
}

void Cat::makeSound() const
{
    std::cout << "meow!"<<std::endl;
}
