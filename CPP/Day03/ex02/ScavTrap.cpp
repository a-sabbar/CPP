/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 17:49:06 by asabbar           #+#    #+#             */
/*   Updated: 2022/09/07 17:44:40 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
    this->Hit = 100;
    this->Energy = 50;
    this->Attack_damage = 20;
    std::cout << "ScavTrap  :  Hi ScavTrap !!"<< std::endl;
}
ScavTrap::ScavTrap(ScavTrap const &copy)
{
    *this = copy;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->Name = name;
    this->Hit = 100;
    this->Energy = 50;
    this->Attack_damage = 20;
    std::cout << name << "  :  Hi ScavTrap !!"<< std::endl;
}

void	ScavTrap::attack(const std::string &target)
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
    std::cout <<Name << " : Mode Guard Gat 😫" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << this->Name << "  :  good bye ScavTrap !!"<< std::endl;
}


void	ScavTrap::operator=(const ScavTrap &X )
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->Name = X.Name;
    this->Hit = X.Hit;
    this->Energy = X.Energy;
    this->Attack_damage = X.Attack_damage;
}