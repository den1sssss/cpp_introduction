/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:15:08 by denis             #+#    #+#             */
/*   Updated: 2022/09/18 16:56:47 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>


class ClapTrap
{
    private:
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