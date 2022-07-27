/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 17:31:44 by dshirely          #+#    #+#             */
/*   Updated: 2022/07/25 13:54:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie test("test");
	Zombie zombie("Denis");
	Zombie zombie1("Andrew");
	Zombie *zom;
	zom = zombie.newZombie("aa");
	zom->announce();
	delete zom;
	zombie1.randomChump("Anton");
	zombie.~Zombie();
	zombie.announce();
	test.announce();
}