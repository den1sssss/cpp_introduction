/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denis <denis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:15:08 by denis             #+#    #+#             */
/*   Updated: 2022/09/02 13:49:57 by denis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>


class ClapTrap
{
    protected:
        std::string _name;
        int _hp;
        int _mana;
        int _damage;
    public:
        ClapTrap();
        ~ClapTrap();
        ClapTrap(std::string name);
		ClapTrap(const ClapTrap &arg);
		ClapTrap &operator=(const ClapTrap &arg);
        void attack(const std::string & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

};

#endif