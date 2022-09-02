/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denis <denis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:24:40 by denis             #+#    #+#             */
/*   Updated: 2022/09/02 13:29:21 by denis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{

}

ClapTrap::~ClapTrap()
{

}

ClapTrap::ClapTrap(std::string name): _name(name), _hp(10), _mana(10), _damage(0)
{

}

ClapTrap::ClapTrap(const ClapTrap &arg)
{
    *this = arg;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &arg)
{
	_name = arg._name;
	_hp = arg._hp;
	_mana = arg._mana;
	_damage = arg._damage;
	return *this;
}

void ClapTrap::attack(const std::string & target)
{
    if(_hp > 0 && _mana > 0)
        std::cout << "ClapTrap " << _name  << " attacks " << target << " ,causig " << _damage << " points of damage!" << std::endl;
    _mana--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    _hp -= amount;
    std::cout << "ClapTrap " << _name << " took a " << amount << " of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    _hp += amount;
    std::cout << "ClapTrap " << _name << " repaired a " << amount << " hitPoints!" << std::endl;
}

