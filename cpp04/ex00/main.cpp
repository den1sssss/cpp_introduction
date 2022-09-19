#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << std::endl;

    std::cout << j->getType() << " type is here" << std::endl;
    std::cout << i->getType() << " type is here" << std::endl;

    std::cout << std::endl;

    i->makeSound(); 
    j->makeSound();
    meta->makeSound();

    std::cout << std::endl;
	std::cout << std::endl;

    delete j;
	delete i;
    delete meta;

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    Animal		Titi;
	Dog			Idefix;
	Cat			Garfield;
	WrongAnimal	Coffee;
	WrongCat	Grosminet;

	std::cout << std::endl;

	std::cout << Titi.getType() << std::endl;
	Titi.makeSound();

	std::cout << std::endl;

	std::cout << Idefix.getType() << std::endl;
	Idefix.makeSound();

	std::cout << std::endl;

	std::cout << Garfield.getType() << std::endl;
	Garfield.makeSound();

	std::cout << std::endl;

	std::cout << Coffee.getType() << std::endl;
	Coffee.makeSound();

	std::cout << std::endl;

	std::cout << Grosminet.getType() << std::endl;
	Grosminet.makeSound();

	std::cout << std::endl;


    return 0;
}