/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:57:44 by dshirely          #+#    #+#             */
/*   Updated: 2022/09/18 16:57:45 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private:
        FragTrap();
    public:
        FragTrap(std::string name);
        ~FragTrap();
        FragTrap(const FragTrap &src);
        FragTrap &operator=(const FragTrap &newValue);
	    void highFivesGuys();
};

#endif