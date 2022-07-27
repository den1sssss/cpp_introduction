/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 14:37:16 by dshirely          #+#    #+#             */
/*   Updated: 2022/07/24 14:37:17 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	// int i = 0;
	Zombie *zombies;

	zombies = zombieHorde(5,"Denis");
	for(int i =0; i < 5;i++)
	{
		zombies[i].announce();
	}
	delete[] zombies;
}