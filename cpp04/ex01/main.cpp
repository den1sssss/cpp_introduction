/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 11:37:59 by dshirely          #+#    #+#             */
/*   Updated: 2022/09/13 17:58:54 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Dog.hpp"
// #include "Cat.hpp"
// #include "WrongAnimal.hpp"
// #include "WrongCat.hpp"

// int main()
// {
//     const Animal* meta = new Animal();
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();
//     std::cout << j->getType() << " type is here" << std::endl;
//     std::cout << i->getType() << " type is here" << std::endl;
//     i->makeSound();
//     j->makeSound();
//     meta->makeSound();

//     const WrongAnimal* w = new WrongCat();
//     std::cout << w->getType() << " " << std::endl;
//     w->makeSound();
//     // delete j;
// 	// delete i;
//     return 0;
// }
#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    int arraySize = 5;
    int i = 0;

    Animal  *animals[arraySize];
    while (i < arraySize)
    {
        if (i % 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
        i++;
    }

    std::cout << "----------------" << std::endl;
    Brain *brain = animals[2]->getBrain();
	brain->ideas[0] = "EAT";
	brain->ideas[1] = "SLEEP";
	brain->ideas[2] = "Zzzzz";
	std::cout << animals[2]->getBrain()->ideas[2] << std::endl;

    std::cout << "----------------" << std::endl;
	animals[3]->makeSound();
	animals[4]->makeSound();
	std::cout << "Type: " << animals[2]->getType() << std::endl;

    std::cout << "----------------" << std::endl;
    std::cout << animals[2]->getType() << std::endl;
	*(animals[2]) = *(animals[3]);
    std::cout << animals[3]->getType() << std::endl;
	std::cout << animals[2]->getType() << std::endl;

    std::cout << "----------------" << std::endl;
    i = 0;
    while (i < arraySize)
    {
        delete &animals[i];
        i++;
    }
    return 0;
}