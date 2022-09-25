/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:38:20 by dshirely          #+#    #+#             */
/*   Updated: 2022/09/06 17:39:17 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class AAnimal
{
    protected:
        std::string type;
    public:
        AAnimal();
        virtual ~AAnimal(void);
        AAnimal(const AAnimal &src);
        AAnimal &operator=(const AAnimal &arg);    
        std::string getType() const;
        virtual void makeSound() const = 0;
};

#endif