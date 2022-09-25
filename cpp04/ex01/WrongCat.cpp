/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:24:47 by dshirely          #+#    #+#             */
/*   Updated: 2022/09/25 16:27:19 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "WrongCat default constructor" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src)
{
    *this = src;
    std::cout << "WrongCat copy constructor"<< std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat &arg)
{
    this->type=arg.getType();
    std::cout <<"WrongCat copy assigment operator" << type << std::endl;
    return(*this);
}

void WrongCat::makeSound() const
{
    std::cout << "Cat's wrong sound!"<<std::endl;
}
