/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 15:10:33 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/09 12:17:31 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon      *var;
		std::string name;
	public:
		HumanB(std::string name);
		void	setWeapon(Weapon &var);
		void	attack();
		~HumanB();
};

#endif