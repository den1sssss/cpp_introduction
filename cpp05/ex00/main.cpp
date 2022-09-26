/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 20:25:26 by dshirely          #+#    #+#             */
/*   Updated: 2022/09/26 20:25:28 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat bur1("Denis",2);
        Bureaucrat bur2("Andrew", 150);

        std::cout << bur1 << std::endl;
        std::cout << bur2 << std::endl;
        bur1.increase();
        std::cout << bur1 << std::endl;

        bur2.decrease();

        Bureaucrat bur3("Nedoidet",12);
        std::cout << bur3 << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
       
}