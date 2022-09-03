/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 23:01:47 by asabbar           #+#    #+#             */
/*   Updated: 2022/09/03 11:26:51 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Constructor Cat" << std::endl;
}

Cat::Cat(Cat const &copy)
{
	std::cout << "Copy Constructor Cat" << std::endl;
	*this = copy;
}

void	Cat::operator=(const Cat &X )
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->type = X.type;
}

void	Cat::makeSound(void)const
{
	std::cout << "mew"<< std::endl;
}

Cat::~Cat()
{
	std::cout << "Destructor Cat" << std::endl;	
}
