/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 15:17:13 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/26 11:55:59 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
}
void     Zombie::setName(std::string New_name)
{
	this->name = New_name;
}

void    Zombie::announce(void){
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..."<<  std::endl;
}

Zombie *newZombie( std::string name ){
	Zombie *New;

	New = new Zombie;
	New->setName(name);
	return New;
}

void randomChump( std::string name ){
	Zombie *New;

	New = newZombie(name);
	New->announce();
	delete(New);
}

Zombie*	zombieHorde( int N, std::string name ){
	Zombie	*New;
	int		i;

	New = new Zombie[N];
	i = -1;
	while(++i < N)
		New[i].setName(name);
	return New;
}
