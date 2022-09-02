/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denis <denis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:24:46 by denis             #+#    #+#             */
/*   Updated: 2022/09/02 13:26:09 by denis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap A("Denis");
	ClapTrap B("Danya");

	A.attack("TARGET A");
	B.attack("TARGET B");

	A.takeDamage(5);
	B.takeDamage(8);

	A.beRepaired(1);
	B.beRepaired(6);

	A.takeDamage(5);
	B.takeDamage(11);

	A.beRepaired(10);
	B.beRepaired(15);

	A.beRepaired(10);
	A.beRepaired(10);
	A.beRepaired(10);
	A.beRepaired(10);
	A.beRepaired(10);
	A.beRepaired(10);

	A.takeDamage(5);
	A.attack("TARGET A");
	A.attack("TARGET A");

	return 0;
}