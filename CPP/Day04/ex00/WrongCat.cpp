/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 12:23:49 by asabbar           #+#    #+#             */
/*   Updated: 2022/09/03 11:30:00 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"


WrongCat::WrongCat()
{
	this->type = "Cat";
	std::cout << "Constructor WrongCat" << std::endl;
}
WrongCat::WrongCat(WrongCat const &copy)
{
	std::cout << "Copy Constructor WrongCat" << std::endl;
	*this = copy;
}

void	WrongCat::operator=(const WrongCat &X )
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->type = X.type;
}
void	WrongCat::makeSound(void)const
{
	std::cout << "meow"<< std::endl;
}


WrongCat::~WrongCat()
{
	std::cout << "Constructor WrongCat" << std::endl;
}