/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:47:29 by asabbar           #+#    #+#             */
/*   Updated: 2022/09/07 16:44:32 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap A("achraf");
    ClapTrap B("sabbar");
	std::cout<< std::endl;
	std::cout<< std::endl;

    
    A.attack("sabbar");

    B.takeDamage(0);
    
    A.attack("sabbar");

    B.takeDamage(0);

    A.attack("sabbar");

    B.takeDamage(0);

    B.beRepaired(10);

    
    std::cout<< std::endl;
	std::cout<< std::endl;
    return 0;
}