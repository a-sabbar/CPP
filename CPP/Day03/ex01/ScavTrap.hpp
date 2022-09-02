/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 17:49:03 by asabbar           #+#    #+#             */
/*   Updated: 2022/09/01 11:40:30 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(ScavTrap const &copy);
		void	operator=(const ScavTrap &X );
		ScavTrap(std::string name);
		void	attack(const std::string& target);
		void	guardGate();
		~ScavTrap();
};


#endif