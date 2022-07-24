/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 17:32:07 by dshirely          #+#    #+#             */
/*   Updated: 2022/07/22 17:32:08 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	_name = name;
}
void Zombie::announce()
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie::randomChump(std::string name)
{
	Zombie zombie(name);
	zombie.announce();
}
Zombie::~Zombie()
{
	std::cout << _name << " died" << std::endl;
}
Zombie *Zombie::newZombie(std::string name)
{
	return (new Zombie(name));
}