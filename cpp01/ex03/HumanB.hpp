/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 16:10:58 by dshirely          #+#    #+#             */
/*   Updated: 2022/07/24 16:10:59 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name, Weapon &weapon);
		HumanB(std::string name);
		void attack();
		void setWeapon(Weapon &weapon);
	private:
		Weapon *_weapon;
		std::string _name;
};


#endif 