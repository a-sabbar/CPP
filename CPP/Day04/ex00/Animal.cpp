/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 23:01:55 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/18 17:00:09 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Null")
{
	std::cout << "Constructor Animal" << std::endl;
}

std::string	Animal::getType()const
{
	return this->type;
}

void	Animal::makeSound(void)const
{
	std::cout << std::endl;
}

Animal::~Animal()
{
	std::cout << "Destructor Animal" << std::endl;
}
