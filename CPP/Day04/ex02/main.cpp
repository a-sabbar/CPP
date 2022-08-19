/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 23:01:25 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/19 17:13:20 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
    int i = 0;
    const Animal* test[10];

    while(i < 5)
    {
        test[i] = new Dog();
        i++;       
    }
    while(i < 10)
    {
        test[i] = new Cat();
        i++;       
    }
    i = -1;

    while(++i < 10)
    {
        delete(test[i]);
    }
	return 0;   
}