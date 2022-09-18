/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:57:15 by dshirely          #+#    #+#             */
/*   Updated: 2022/09/18 16:57:16 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap A("ClapTrap");
	ScavTrap B;

	B.guardGate();

	A.attack("ScavTrap");
	B.attack("ClapTrap");

	A.takeDamage(5);
	B.takeDamage(8);

	A.beRepaired(1);
	B.beRepaired(6);

	A.attack("ScavTrap");
	B.attack("ClapTrap");

	A.takeDamage(100);
	B.takeDamage(8);

	return 0;
}