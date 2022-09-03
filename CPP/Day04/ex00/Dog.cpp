/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 23:01:39 by asabbar           #+#    #+#             */
/*   Updated: 2022/09/03 11:28:18 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"


Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Constructor Dog" << std::endl;
}

Dog::Dog(Dog const &copy)
{
	std::cout << "Copy Constructor Dog" << std::endl;
	*this = copy;
}

void	Dog::operator=(const Dog &X )
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->type = X.type;
}

void	Dog::makeSound(void)const
{
	std::cout << "bark"<< std::endl;
}

Dog::~Dog()
{
	std::cout << "Destructor Dog" << std::endl;	
}
