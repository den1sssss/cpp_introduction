/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:21:11 by dshirely          #+#    #+#             */
/*   Updated: 2022/09/28 14:21:12 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(void)
{
    Data data;
    Data *deserial;
    uintptr_t serial;

    data.str = "aboba";
    std::cout <<"Data adress: "<< &data << std::endl;
    std::cout <<"String: " << data.str <<std::endl;

    serial = serialize(&data);
    deserial = deserialize(serial);
    
    std::cout <<"New adress: " << deserial <<std::endl;
    std::cout <<"String: " << deserial->str <<std::endl;

    return (0);
}