/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 15:28:05 by asabbar           #+#    #+#             */
/*   Updated: 2022/09/01 11:34:36 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <string>
#include <iomanip>

class ClapTrap
{
	private:
		std::string Name;
		int         Hit;
		int			Energy;
		int			Attack_damage;
	public:
		ClapTrap();
		ClapTrap(ClapTrap const &copy);
		ClapTrap(std::string name);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	operator=(const ClapTrap &X );
		~ClapTrap();
};


#endif