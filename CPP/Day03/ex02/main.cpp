/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:47:29 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/17 21:40:53 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
	ClapTrap clapper("achraf");
	ScavTrap scaver("sabbar");
	FragTrap fragger("asabbar");

	scaver.guardGate();
	fragger.highFivesGuys();
	clapper.attack("asabbar");
	fragger.takeDamage(20);
	fragger.attack("achraf");
	clapper.takeDamage(20);
	return (0);
}