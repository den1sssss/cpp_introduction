/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:24:40 by dshirely          #+#    #+#             */
/*   Updated: 2022/09/25 16:24:41 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main(void)
{
	Animal	*animal[10];
	int		i;
	i = -1;
	while (++i < 10)
	{
		if (i % 2)
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
		std::cout << std::endl;
	}
	i--;
	std::cout << std::endl;
	while (i >= 0)
	{
		delete animal[i];
		i--;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;

	Dog		Persik;
	std::cout << std::endl;
	Dog tmp = Persik;

	std::cout << std::endl;
	std::cout << std::endl;

	const Animal* j = new Dog();
	const Animal* k = new Cat();
	
	delete j;
	delete k;
	return (0);
}
