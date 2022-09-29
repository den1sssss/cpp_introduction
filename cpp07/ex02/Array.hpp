#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <exception>

template<typename T>
class Array
{
    private:
        T *array;
        unsigned int len;
    public:
        Array();
        ~Array()
        {
            if(array)
                delete [] array;
        };

        Array(Array const &src)
        {
            len = src.len;
            for(int i = 0;i < len; i++)
                array[i]=src.array[i];
        };

        Array(unsigned int n)
        {
            len = n;
            array = new T[n]();
        };

        Array &operator=(Array const &src)
        {
            // 
        };

        T &operator[](unsigned int ind)
        {
                // 
        };

        unsigned int size()
        {
            return(len);
        }
        
        class OutOfRange : public std::exception
        {
            public :
				virtual const char* what() const throw()
				{
					return ("ArrayException: index out of range");
                }
        }
};



#endif