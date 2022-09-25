/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:24:32 by dshirely          #+#    #+#             */
/*   Updated: 2022/09/25 16:24:32 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP 
# define BRAIN_HPP

# include <iostream>
#include "Brain.hpp"
#include "Animal.hpp"

class Brain
{
    public:
        Brain();
        Brain(const Brain &src);
        virtual ~Brain();
        Brain   &operator=(const Brain &a);
    private:
        std::string ideas[100];
};


#endif