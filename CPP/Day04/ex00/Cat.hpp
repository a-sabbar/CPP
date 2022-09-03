/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 23:01:43 by asabbar           #+#    #+#             */
/*   Updated: 2022/09/03 11:27:25 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat();
		Cat(Cat const &copy);
		void	makeSound()const;
		~Cat();
		void	operator=(const Cat &X );
};


#endif 