/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 15:17:18 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/19 22:41:48 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){

	Zombie *C;
	int     i;
	int     nb_zombie =10;

   C = zombieHorde(nb_zombie , "achraf");
   i = -1;
   	while(++i < nb_zombie)
		C[i].announce();
}
