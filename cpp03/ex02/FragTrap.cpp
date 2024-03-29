/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:57:42 by dshirely          #+#    #+#             */
/*   Updated: 2022/09/18 16:57:43 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap("FragTrap")
{
    _hp = 100;
    _mana = 100;
    _damage = 30;
    std::cout << name << " constructor called!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << _name << " Destructor called!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src)
{
    *this = src;
    std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &newValue)
{
    std::cout << "FragTrap assignement operator called" << std::endl;
    _name = newValue._name;
    _hp = newValue._hp;
    _mana = newValue._mana;
    _damage = newValue._damage;
    return *this;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap gives high fives" << std::endl;
}
