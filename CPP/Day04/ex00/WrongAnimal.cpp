/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 12:23:14 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/19 12:35:38 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Null")
{
	std::cout << "Constructor WrongAnimal" << std::endl;
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
