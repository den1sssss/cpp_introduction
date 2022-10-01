/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:32:26 by dshirely          #+#    #+#             */
/*   Updated: 2022/10/01 17:34:17 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
    char str[]={'a','B','o','b','A'};
    std::string strs[]={"aboba","kek","lol","ROFL","HELLO"};
    int arr[]={1,2,3,4,5};

    ::iter(str,5,toUpper);
    std::cout << std::endl;

    ::iter(strs,5,addSpace);
    std::cout << std::endl;
    
    ::iter(arr,5,addSpace);
}