/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:10:53 by dshirely          #+#    #+#             */
/*   Updated: 2022/10/03 14:10:53 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main(void)
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);

    std::cout << "Top" << std::endl;
    std::cout << mstack.top() << std::endl;
    std::cout << std::endl;

    mstack.pop();

    std::cout << "Top after Pop" << std::endl;
    std::cout << mstack.top() << std::endl;
    std::cout << std::endl;

    std::cout << "Size" << std::endl;
    std::cout << mstack.size() << std::endl;
    std::cout << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    std::cout << std::endl;
    std::cout << "iterator" << std::endl;
    std::cout << std::endl;

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }


    std::stack<int> s(mstack);
	MutantStack<int>::reverse_iterator it2 = mstack.rbegin();
	MutantStack<int>::reverse_iterator ite2 = mstack.rend();

    std::cout << std::endl;
    std::cout << "Reverse" << std::endl;
    std::cout << std::endl;

	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		it2++;
	}
	std::cout << std::endl;



    {
		std::list<int> mstack;
		
		mstack.push_back(5);
		mstack.push_back(17);

        std::cout << "Back" << std::endl;
		std::cout << mstack.back() << std::endl;

		mstack.pop_back();

        std::cout << "Front(Top) after Pop_Back" << std::endl;
        std::cout << mstack.front() << std::endl;
        std::cout << std::endl;

        std::cout << "Size" << std::endl;
		std::cout <<mstack.size() << std::endl;
        std::cout << std::endl;

		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();


		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
    }
    return 0;
}