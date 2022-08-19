/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 23:01:39 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/18 17:01:11 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"


Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Constructor Dog" << std::endl;
}

void	Dog::makeSound(void)const
{
	std::cout << "bark"<< std::endl;
}

Dog::~Dog()
{
	std::cout << "Destructor Dog" << std::endl;	
}
