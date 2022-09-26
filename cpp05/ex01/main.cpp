/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 20:25:39 by dshirely          #+#    #+#             */
/*   Updated: 2022/09/26 20:25:40 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(void) {
    try {
        Form f1 = Form("Form1", 10, 5);
        Bureaucrat b1 = Bureaucrat("Ivan", 30);
        Bureaucrat b2 = Bureaucrat("Denis", 1);

        std::cout << f1 << std::endl;

        b1.signForm(f1);
        std::cout<<std::endl;
        b2.signForm(f1);
        std::cout<<std::endl;

        Form f2 = Form("Form2", 0, 5);
    }
    catch (std::exception & e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
}