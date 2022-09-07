/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:47:29 by asabbar           #+#    #+#             */
/*   Updated: 2022/09/07 16:37:39 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
	FragTrap fragger("asabbar");
	ClapTrap clapper("achraf");
	ScavTrap scaver("sabbar");

	std::cout<< std::endl;
	std::cout<< std::endl;

	
	scaver.guardGate();
	fragger.highFivesGuys();
	clapper.attack("asabbar");
	fragger.takeDamage(20);
	fragger.attack("achraf");
	clapper.takeDamage(20);


	
	std::cout<< std::endl;
	std::cout<< std::endl;
	return (0);
}