/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 13:44:37 by asabbar           #+#    #+#             */
/*   Updated: 2022/09/03 11:40:19 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Constructor Brain" << std::endl;
}
Brain::Brain(Brain const &copy)
{
	std::cout << "Copy Constructor Brain" << std::endl;
	*this = copy;
}

void	Brain::operator=(const Brain &X )
{
    std::cout << "Copy assignment operator called" << std::endl;
    int i = -1;
    while(++i < 100)
        this->ideas[i] = X.ideas[i];  
}

Brain::~Brain()
{
    std::cout << "Destructor Brain" << std::endl;
}