/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 14:37:22 by dshirely          #+#    #+#             */
/*   Updated: 2022/07/24 14:37:24 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* 	zombieHorde( int N, std::string name )
{
	Zombie *zombies = new Zombie[N];

	for(int i = 0; i < N;i++)
		zombies[i].set_name(name);
	return (zombies);
}