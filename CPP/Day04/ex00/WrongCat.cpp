/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 12:23:49 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/19 12:35:59 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"


WrongCat::WrongCat()
{
	this->type = "Cat";
	std::cout << "Constructor WrongCat" << std::endl;
}

void	WrongCat::makeSound(void)const
{
	std::cout << "meow"<< std::endl;
}


WrongCat::~WrongCat()
{
	std::cout << "Constructor WrongCat" << std::endl;
}