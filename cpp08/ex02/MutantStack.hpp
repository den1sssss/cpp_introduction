/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:10:56 by dshirely          #+#    #+#             */
/*   Updated: 2022/10/03 14:10:57 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP 
# define MUTANTSTACK_HPP
# include <iostream>
# include <stack>
# include <list>
# include <vector>
# include <algorithm>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack(){};
        ~MutantStack(){};
        MutantStack(const MutantStack &src)
        {
            *this = src;
        };
		MutantStack & operator=(const MutantStack &src)
        {
            (void)src;
            return(*this);
        }

        typedef typename std::stack<T>::container_type::iterator    iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator   reverse_iterator;

        iterator begin()
        {
            return(this->c.begin());
        };
        iterator end()
        {
            return(this->c.end());
        };
        reverse_iterator rbegin()
        {
            return this->c.rbegin();
        };
        reverse_iterator rend()
        {
            return this->c.rend();
        };


        

};

#endif