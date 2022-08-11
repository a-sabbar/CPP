/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 15:10:35 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/08 17:44:29 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(const std::string &type, Weapon &var) : var(var) , name(type)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack(){
    std::cout << this->name << " attacks with their " << this->var.getType() << std::endl; 
}