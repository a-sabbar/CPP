/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 11:07:08 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/31 18:59:08 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
#include <exception>

template <typename T> class Array {
private:
    T   *elem;
    size_t  Size;
public:
    Array() : elem(0)
    {
        std::cout << "constracter : hi\n"; 
    }
    Array(unsigned int n)
    {
        this->Size = n;
        elem = new T[n];
    }
    
    Array(Array const &clas)
    {
        this->Size = clas.Size ;
        this->elem = new T[clas.Size];
        size_t i = 0;
        while(i < Size)
        {
            this->elem[i] = clas.elem[i];
            i++;
        }
    }
    void operator=(const Array X)
    {

        this->elem = new T[X.Size];
        size_t i = 0;
        while(i < Size)
        {
            this->elem[i] = X.elem[i];
            i++;
        }
    }
    T   &operator[](size_t i)
    {
        if(i >= 0 && i < this->Size)
            return elem[i];
        throw outBounds();
    }
    class outBounds: public std::exception
    {
       const char* what() const throw()
       {
           return "out Bounds :(";
       }
    };
    ~Array()
    {
        delete [] elem;
        std::cout << "destracter : Bye\n";
    }
};


#endif