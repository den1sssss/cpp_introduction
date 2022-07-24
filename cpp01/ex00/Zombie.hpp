/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 17:32:09 by dshirely          #+#    #+#             */
/*   Updated: 2022/07/22 18:18:34 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	public:
		Zombie(std::string _name);
		void set_name(std::string name);
		void announce(void);
		void randomChump(std::string name);
		Zombie *newZombie(std::string name);
		~Zombie();
private:
	std::string _name;
};

#endif 