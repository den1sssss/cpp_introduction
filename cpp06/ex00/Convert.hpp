#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>


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

        void convert(const std::string &src) const;

        typedef void(Convert::*f)() const;
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