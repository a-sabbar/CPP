/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 23:01:39 by asabbar           #+#    #+#             */
/*   Updated: 2022/09/03 11:47:29 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"


Dog::Dog()
{
	this->type = "Dog";
	this->B = new Brain();
	std::cout << "Constructor Dog" << std::endl;
}
Dog::Dog(const Dog & obj)
{
	*this = obj;
	this->B = new Brain(*(obj.B));
	std::cout << "Copy Constructor Dog" << std::endl;
}

void	Dog::makeSound(void)const
{
	std::cout << "bark"<< std::endl;
}

Dog::~Dog()
{
	delete(this->B);
	std::cout << "Destructor Dog" << std::endl;	
}

void	Dog::operator=(const Dog &X )
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->type = X.type;
    this->B = X.B;
}