/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 17:31:44 by dshirely          #+#    #+#             */
/*   Updated: 2022/07/22 19:12:05 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie zombie("Denis");
	Zombie zombie1("Andrew");
	zombie1.randomChump("Chuck");
	zombie.~Zombie();
	zombie.announce();
}