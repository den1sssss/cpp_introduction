/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshirely <dshirely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:20:59 by dshirely          #+#    #+#             */
/*   Updated: 2022/09/28 14:23:42 by dshirely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(){}
Convert::~Convert(){}
Convert::Convert(const Convert &src)
{
    *this=src;
}

Convert &Convert::operator=(const Convert &src)
{
    num=src.getValue();
    return (*this);
}

void Convert::setValue(double num)
{
    this->num=num;
}

double Convert::getValue() const
{
    return(num);
}

void Convert::toChar() const
{
    std::cout<<"char: ";
    if(!isascii(static_cast<int>(num)))
        throw Convert::impossibleToConvert();
    if(!isprint(static_cast<int>(num)))
        throw Convert::notDisplayable();
    std::cout << static_cast<char>(num)<<std::endl;
}

void Convert::toInt() const
{
    std::cout<<"int: ";
    if(num < std::numeric_limits<int>::min() || num > std::numeric_limits<int>::max() ||\
    std::isnan(num) || std::isinf(num))
        throw Convert::impossibleToConvert();
    std::cout << static_cast<int>(num)<< std::endl;
}

void Convert::toFloat() const
{
    std::cout<<"float: ";
    if(num - static_cast<int>(num) == 0 && !std::isnan(num) && !std::isinf(num))
        std::cout<<num<<".0f"<<std::endl;
    else
    {
        if(!std::signbit(num) && std::isinf(num))
            std::cout<<"+";
        std::cout<<static_cast<float>(num)<<"f"<<std::endl;
    }
}

void Convert::toDouble() const
{
    std::cout<<"double: ";
    if(std::isnan(num))
        std::cout<<"nan"<<std::endl;
    else if(std::isinf(num) && !std::signbit(num))
        std::cout<<"+inf"<<std::endl;
    else if(num - static_cast<int>(num) == 0 && !std::isnan(num) && !std::isinf(num))
        std::cout<< num << ".0" << std::endl;
    else if(num <=1e-14 && num >= 1e-14)
        std::cout << "0.0" << std::endl;
    else
        std::cout<<static_cast<double>(num)<<std::endl;
}

void Convert::convert(const std::string &name) const
{
    std::string arr[4]={"char","int","float","double"};
    Convert::func function[4]={&Convert::toChar,&Convert::toInt,&Convert::toFloat,&Convert::toDouble};

    int i = 0;
    while(i < 4)
    {
        if(arr[i] == name)
        {
            try
            {
                (this->*(function[i]))();
            }
            catch(const std::exception& e) 
            {
                std::cerr << e.what() << '\n';
            }
            break;
        }
        i++;
    }
    if(i == 4)
        std::cout << "Can`t do this. Unnkown type."<< std::endl;
}
const char *Convert::notDisplayable::what() const throw()
{
	return("not displayable");
}

const char *Convert::impossibleToConvert::what() const throw()
{
	return("impossible to convert");
}