/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:24:46 by denis             #+#    #+#             */
/*   Updated: 2022/09/18 16:56:52 by dshirely         ###   ########.fr       */
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

	A.attack("Danya");
	B.attack("Denis");

	return 0;
}