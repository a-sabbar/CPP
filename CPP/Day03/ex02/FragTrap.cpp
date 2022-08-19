/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:39:16 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/17 21:42:00 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

FragTrap::FragTrap() 
{
}
FragTrap::FragTrap(std::string name) 
{
    this->Name = name;
    this->Hit = 100;
    this->Energy = 100;
    this->Attack_damage = 30;
    std::cout << name << "  Hi FragTrap !!"<< std::endl;
}


void	FragTrap::attack(const std::string& target)
{
    if (this->Hit && this->Energy)
    {
        std::cout << "  FragTrap (" <<  this->Name << ") attacks ("<< target << ") ,causing " << this->Attack_damage<< " points of damage!"<< std::endl;
        this->Energy--;
    }
    else{
        std::cout<< "  FragTrap i can't attack"<< std::endl;
    }
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "  High Fives 🙌" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << this->Name << "  Good bye FragTrap !!"<< std::endl;
}