/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:25:12 by dshirely          #+#    #+#             */
/*   Updated: 2022/09/25 16:25:15 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
    public:
        Dog();
        virtual ~Dog();
        Dog(const Dog &src);
        Dog &operator=(const Dog &arg);
        void makeSound() const;
    protected:
        Brain *DogBrain;
};

#endif