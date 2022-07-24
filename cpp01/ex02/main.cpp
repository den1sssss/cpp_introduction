/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 14:50:42 by dshirely          #+#    #+#             */
/*   Updated: 2022/07/24 14:50:43 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
		std::string string = "HI THIS IS BRAIN";
		std::string *stringPTR = &string;
		std::string &stringREF = string;


		std::cout << &string << std::endl;
		std::cout << &stringPTR << std::endl;
		std::cout << &stringREF << std::endl;

		std::cout << string << std::endl;
		std::cout << *stringPTR << std::endl;
		std::cout << stringREF << std::endl;
}