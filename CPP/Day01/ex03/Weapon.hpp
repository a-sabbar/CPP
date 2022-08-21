/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 14:25:17 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/19 22:42:12 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
private:
	std::string type;
public:
	Weapon();
	Weapon(const std::string &type);
	const std::string &    getType();
	void			setType(const std::string &type);
	~Weapon();
};

#endif
