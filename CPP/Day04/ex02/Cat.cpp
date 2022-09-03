/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 23:01:47 by asabbar           #+#    #+#             */
/*   Updated: 2022/09/03 11:46:52 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->B = new Brain();
	std::cout << "Constructor Cat" << std::endl;
}

Cat::Cat(const Cat & obj)
{
	*this = obj;
	this->B = new Brain(*(obj.B));
	std::cout << "Copy Constructor Cat" << std::endl;
}
void	Cat::makeSound(void)const
{
	std::cout << "mew"<< std::endl;
}

Cat::~Cat()
{
	delete(this->B);
	std::cout << "Destructor Cat" << std::endl;	
}

void	Cat::operator=(const Cat &X )
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->type = X.type;
    this->B = X.B;
}