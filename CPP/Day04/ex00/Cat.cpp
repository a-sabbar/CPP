/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 23:01:47 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/18 17:00:30 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Constructor Cat" << std::endl;
}

void	Cat::makeSound(void)const
{
	std::cout << "mew"<< std::endl;
}

Cat::~Cat()
{
	std::cout << "Destructor Cat" << std::endl;	
}
