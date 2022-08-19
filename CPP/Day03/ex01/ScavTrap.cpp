/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 17:49:06 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/17 15:26:29 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() 
{
}
ScavTrap::ScavTrap(std::string name) 
{
    this->Name = name;
    this->Hit = 100;
    this->Energy = 50;
    this->Attack_damage = 20;
    std::cout << name << "  :  Hi ScavTrap !!"<< std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
    if (this->Hit && this->Energy)
    {
        std::cout << "-> ScavTrap (" <<  this->Name << ") attacks ("<< target << ") ,causing " << this->Attack_damage<< " points of damage!"<< std::endl;
        this->Energy--;
    }
    else{
        std::cout<< "-> ScavTrap i can't attack"<< std::endl;
    }
}

void	ScavTrap::guardGate()
{
    std::cout << " Guard Gat  ^__^ " << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << this->Name << "  :  good bye ScavTrap !!"<< std::endl;
}