/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 14:28:06 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/08 17:37:16 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}
Weapon::Weapon(const std::string &type)
{
    this->type = type;   
}

Weapon::~Weapon()
{
}


const std::string & Weapon::getType()
{
    std::string& ret = this->type;
    return(ret);
}

void    Weapon::setType(const std::string &type)
{
    this->type = type;
}