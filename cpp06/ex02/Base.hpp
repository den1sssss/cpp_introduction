/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:21:17 by dshirely          #+#    #+#             */
/*   Updated: 2022/09/28 14:21:18 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_H
# define BASE_H

#include <iostream>
class Base 
{
	public:
		virtual ~Base() 
        {

        }
};

class A: public Base
{

};

class B: public Base
{

};

class C: public Base
{
    
};

#endif
