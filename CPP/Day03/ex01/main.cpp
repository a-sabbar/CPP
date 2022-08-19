/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:47:29 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/17 14:19:00 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	std::string s1 = "Achraf";
	std::string s2 = "Sabbar";

	ClapTrap claptrap(s1);
	ScavTrap scavtrap(s2);

	std::cout << std::endl;
	claptrap.attack(s2);
	scavtrap.takeDamage(0);
	scavtrap.beRepaired(18);
	std::cout << std::endl;
	scavtrap.attack(s1);
	claptrap.takeDamage(20);
	scavtrap.attack(s1);
	claptrap.takeDamage(20);
	scavtrap.attack(s1);
	claptrap.beRepaired(64);
	std::cout << std::endl;
	scavtrap.guardGate();
	scavtrap.attack(s1);
	std::cout << std::endl;
	scavtrap.takeDamage(100);
	scavtrap.takeDamage(1);
	scavtrap.attack(s2);
	scavtrap.beRepaired(200);
	
	std::cout << std::endl;
	return (0);
}