/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:57:51 by dshirely          #+#    #+#             */
/*   Updated: 2022/09/18 16:57:52 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("ScavTrap")
{
    _hp = 100;
    _mana = 50;
    _damage = 20;
    std::cout << " ScavTrap Constructor called!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
    *this = src;
    std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &newValue)
{
    std::cout << "ScavTrap assignement operator called" << std::endl;
    _name = newValue._name;
    _hp = newValue._hp;
    _mana = newValue._mana;
    _damage = newValue._damage;
    return *this;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}