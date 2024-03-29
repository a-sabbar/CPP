/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 15:10:35 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/19 22:42:04 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB(std::string name)
{
    this->name = name;
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon &var)
{
    this->var = &var;
}
void	HumanB::attack(){
    if(this->var)
        std::cout << this->name << " attacks with their " << this->var->getType() << std::endl; 
}
