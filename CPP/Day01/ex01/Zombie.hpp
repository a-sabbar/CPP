/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 15:17:11 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/19 22:41:54 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie{
	private:
		std::string name;
	public:
		Zombie();
		void    setName(std::string New_name);
		void    announce(void);
		~Zombie();
};

Zombie*	newZombie(std::string name);
void	randomChump( std::string name );
Zombie*	zombieHorde( int N, std::string name );

#endif
