/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 23:01:55 by asabbar           #+#    #+#             */
/*   Updated: 2022/09/03 11:44:49 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Null")
{
	std::cout << "Constructor Animal" << std::endl;
}

Animal::Animal(Animal const &copy)
{
	std::cout << "Copy Constructor Animal" << std::endl;
	*this = copy;
}

void	Animal::operator=(const Animal &X )
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->type = X.type;
}

std::string	Animal::getType()const
{
	return this->type;
}

Animal::~Animal()
{
	std::cout << "Destructor Animal" << std::endl;
}
