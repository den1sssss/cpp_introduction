/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:10:46 by dshirely          #+#    #+#             */
/*   Updated: 2022/10/03 14:40:07 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    std::cout << std::endl;

    try
	{
		Span span1 = Span(1);
		
		span1.addNumber(3);

		std::cout << span1.shortestSpan() << std::endl;
		std::cout << span1.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

        std::cout << std::endl;
        std::cout << std::endl;

    try
	{
		Span span2 = Span(2);
		
		span2.addNumber(1);
        span2.addNumber(4);
        span2.addNumber(8);
        span2.addNumber(8);

		std::cout << span2.shortestSpan() << std::endl;
		std::cout << span2.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

    std::cout << std::endl;
    std::cout << std::endl;
    try
	{
	    Span span3 = Span(100);
		
		std::vector<int> tab(99, -5);
		tab[0] = 5;
		span3.addNumber(tab.begin(), tab.end());

		std::cout << span3.shortestSpan() << std::endl;
		std::cout << span3.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


    return (0);
}