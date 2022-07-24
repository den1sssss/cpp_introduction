/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 16:10:57 by dshirely          #+#    #+#             */
/*   Updated: 2022/07/24 16:10:58 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
}

HumanB::HumanB(std::string name, Weapon &weapon)
{
	_name = name;
	_weapon = &weapon;
}

void HumanB::setWeapon(Weapon &new_weapon)
{
	_weapon = &new_weapon;
}

void HumanB::attack(){
	std::cout << _name << " attacks with their " << _weapon->getType();
	std::cout <<std::endl;
}