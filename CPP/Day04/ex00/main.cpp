/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 23:01:25 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/19 13:54:26 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* A = new WrongCat();
    std::cout << j->getType() << "  :  " ;
    j->makeSound();
    std::cout << i->getType() << "  :  " ;
    i->makeSound();
    std::cout << meta->getType() << " :  " ;
    meta->makeSound();
    std::cout << A->getType() << " :  " ;
    A->makeSound();
    return 0;
}