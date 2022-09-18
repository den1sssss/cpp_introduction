/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:57:53 by dshirely          #+#    #+#             */
/*   Updated: 2022/09/18 16:57:54 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    public:
        ScavTrap();
        ~ScavTrap();
        ScavTrap(const ScavTrap &src);
        ScavTrap &operator=(const ScavTrap &newValue);
        void guardGate();
    private:
};



#endif