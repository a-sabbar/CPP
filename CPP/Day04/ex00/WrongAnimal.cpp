/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 12:23:14 by asabbar           #+#    #+#             */
/*   Updated: 2022/09/03 11:29:13 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Null")
{
	std::cout << "Constructor WrongAnimal" << std::endl;
}
WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
	std::cout << "Copy Constructor WrongAnimal" << std::endl;
	*this = copy;
}

void	WrongAnimal::operator=(const WrongAnimal &X )
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->type = X.type;
}
std::string	WrongAnimal::getType()const
{
	return this->type;
}

void	WrongAnimal::makeSound(void)const
{
	std::cout << "Animal sound" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Constructor WrongAnimal" << std::endl;
}
