/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:47:29 by asabbar           #+#    #+#             */
/*   Updated: 2022/09/07 16:42:48 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	std::string s1 = "Achraf";
	std::string s2 = "Sabbar";
	std::string s3 = "enemy";

	ClapTrap claptrap(s1);
	ScavTrap scavtrap(s2);
	std::cout<< std::endl;
	std::cout<< std::endl;
	std::cout << std::endl;
	claptrap.attack(s2);
	scavtrap.takeDamage(0);
	scavtrap.beRepaired(1);
	std::cout << std::endl;
	scavtrap.attack(s1);
	claptrap.takeDamage(20);
	scavtrap.attack(s1);
	claptrap.takeDamage(20);
	scavtrap.attack(s1);
	claptrap.beRepaired(64);
	std::cout << std::endl;
	std::cout << std::endl;
	ClapTrap claptrap1(s3);
	std::cout << std::endl;
	scavtrap.guardGate();
	scavtrap.attack(s3);
	scavtrap.takeDamage(100);
	scavtrap.attack(s3);
	scavtrap.takeDamage(150);
	scavtrap.attack(s3);
	scavtrap.beRepaired(200);
	std::cout << std::endl;
	std::cout<< std::endl;
	std::cout<< std::endl;
	return (0);
}