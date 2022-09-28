/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:21:02 by dshirely          #+#    #+#             */
/*   Updated: 2022/09/28 14:22:46 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <cmath>
#include <limits>

class Convert
{
    private:
        double num;
    public:
        Convert();
        ~Convert();
        Convert(const Convert &src);
        Convert &operator=(const Convert &src);

        void setValue(double num);
        double getValue() const;
        void toChar() const;
        void toInt() const;
        void toFloat() const ;
        void toDouble() const;

        void convert(const std::string &name) const;

        typedef void(Convert::*func)() const;
       	class notDisplayable: public std::exception
        {
		    public:
				virtual const char *what() const throw();
		};
        class impossibleToConvert: public std::exception
        {
			public:
				virtual const char *what() const throw();
		};

};

#endif