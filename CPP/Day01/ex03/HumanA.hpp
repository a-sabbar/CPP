/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 15:10:33 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/19 22:42:03 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon      &var;
		std::string name;
	public:
		HumanA(const std::string &type, Weapon &var);
		void	attack();
		~HumanA();
};

#endif
