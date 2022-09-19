/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:24:40 by denis             #+#    #+#             */
/*   Updated: 2022/09/18 16:56:44 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default Constructor called!" << std::endl;
}

ClapTrap::~ClapTrap()
{
     std::cout <<_name << " destructor called!" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hp(10), _mana(10), _damage(0)
{
    std::cout << _name << " Constructor called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &arg)
{
    std::cout << "ClapTrap Copy constructor called" << std::endl;
    *this = arg;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &arg)
{
    std::cout << "Copy assigment operator called" << std::endl;
	_name = arg._name;
	_hp = arg._hp;
	_mana = arg._mana;
	_damage = arg._damage;
	return *this;
}

void ClapTrap::attack(const std::string & target)
{
    if(_hp > 0 && _mana > 0)
        std::cout <<  _name  << " attacks " << target << " ,causig " << _damage << " damage!" << std::endl;
    _mana--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    _hp -= amount;
    std::cout <<  _name << " took a " << amount << " damage! Current hp is " << _hp <<std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(_hp > 0 && _mana > 0)
    {
        _hp += amount;
        std::cout << _name << " repaired a " << amount << " hp! Current hp is " << _hp<< std::endl;
        _mana--;
    }
}

