/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:39:16 by asabbar           #+#    #+#             */
/*   Updated: 2022/09/01 11:45:23 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

FragTrap::FragTrap() 
{
}

FragTrap::FragTrap(FragTrap const &copy)
{
    *this = copy;
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

void	FragTrap::operator=(const FragTrap &X )
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->Name = X.Name;
    this->Hit = X.Hit;
    this->Energy = X.Energy;
    this->Attack_damage = X.Attack_damage;
}