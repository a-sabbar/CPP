/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:47:27 by asabbar           #+#    #+#             */
/*   Updated: 2022/09/08 14:16:10 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Hit(10), Energy(10), Attack_damage(0)
{
    std::cout << "ClapTrap  :  Hi !!"<< std::endl;  
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
    *this = copy;
}

ClapTrap::ClapTrap(std::string name) :  Name(name),  Hit(10), Energy(10), Attack_damage(0)
{
    std::cout << name << "  :  Hi ClapTap !!"<< std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
    if (this->Hit && this->Energy)
    {
        std::cout << "-> ClapTrap (" <<  this->Name << ") attacks ("<< target << ") ,causing " << this->Attack_damage<< " points of damage!"<< std::endl;
        this->Energy--;
    }
    else{
        std::cout<< "-> i can't attack"<< std::endl;
    }
}

void	ClapTrap::takeDamage(unsigned int amount)
{
    if(this->Hit)
    {
        if(amount > (unsigned int)this->Hit)
        {
            std::cout << "-> Take " << amount << " points of damage! and died"<< std::endl;
            this->Hit = 0;
        }
        else
        {
            std::cout << "-> Take " << amount << " points of damage!"<< std::endl;
            this->Hit -= amount;
        }
    }
    else if(!this->Hit)
        std::cout << "-> He is died     ToT\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
    if(this->Hit && this->Energy)
    {
        std::cout <<this->Name <<" -> Repaired " << amount << std::endl;
        this->Hit += amount;
        this->Energy--;
    }
    else
        std::cout<<this->Name <<" : out the game !!! Hit : " << Hit << " Energy :" << Energy<< std::endl;     
}

void	ClapTrap::operator=(const ClapTrap &X )
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->Name = X.Name;
    this->Hit = X.Hit;
    this->Energy = X.Energy;
    this->Attack_damage = X.Attack_damage;
}

ClapTrap::~ClapTrap()
{
    std::cout << this->Name << "  :  good bye ClapTrap !!"<< std::endl;
}

