/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:24:11 by dshirely          #+#    #+#             */
/*   Updated: 2022/09/25 16:24:12 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "Cat default constructor" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor" << std::endl;
}

Cat::Cat(const Cat &src)
{
    *this = src;
    std::cout << "Cat copy constructor"<< std::endl;
}

Cat & Cat::operator=(const Cat &arg)
{
    this->type=arg.getType();
    std::cout <<"Cat copy assigment operator" << type << std::endl;
    return(*this);
}

void Cat::makeSound() const
{
    std::cout << "meow!"<<std::endl;
}
