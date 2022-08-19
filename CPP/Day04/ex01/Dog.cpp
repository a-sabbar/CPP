/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 23:01:39 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/19 17:19:43 by asabbar          ###   ########.fr       */
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
