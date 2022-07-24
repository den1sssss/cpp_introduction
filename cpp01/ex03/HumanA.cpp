/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 16:10:54 by dshirely          #+#    #+#             */
/*   Updated: 2022/07/24 16:10:55 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
	_weapon = &weapon;
	_name = name;
}
void HumanA::attack()
{
	std::cout << _name << " attacks with their " << _weapon->getType();
	std::cout << std::endl;
}