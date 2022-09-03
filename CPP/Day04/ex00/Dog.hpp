/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 23:01:33 by asabbar           #+#    #+#             */
/*   Updated: 2022/09/03 11:28:46 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Dog: public Animal
{

	public:
		Dog();
		Dog(Dog const &copy);
		void	makeSound()const;
		void	operator=(const Dog &X );
		~Dog();
};

#endif 