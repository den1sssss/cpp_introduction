/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 16:57:46 by dshirely          #+#    #+#             */
/*   Updated: 2022/09/18 16:57:47 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{

	ClapTrap A("ClapTrap");
	ScavTrap B;
	FragTrap C("FragTrap");

	B.guardGate();
	C.highFivesGuys();

	A.attack("ScavTrap");
	B.attack("ClapTrap");

	A.takeDamage(5);
	B.takeDamage(8);

	A.beRepaired(10);
	B.beRepaired(60);

	A.attack("ScavTrap");
	B.attack("ClapTrap");

	A.takeDamage(100);
	B.takeDamage(200);

	return 0;
}