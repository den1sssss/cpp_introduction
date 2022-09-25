/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:25:16 by dshirely          #+#    #+#             */
/*   Updated: 2022/09/25 16:25:18 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main(void)
{
	AAnimal*	 Persik = new Dog();
	std::cout << std::endl;

	AAnimal*	Murka = new Cat();
	std::cout << std::endl;

	Persik->makeSound();
	std::cout << std::endl;

	Murka->makeSound();
	std::cout <<std::endl;


	// AAnimal* 	b = new AAnimal(); // не работает тк AAnimal - абстрактный класс
	return (0);
}
