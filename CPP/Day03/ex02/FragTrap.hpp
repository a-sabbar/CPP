/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:39:35 by asabbar           #+#    #+#             */
/*   Updated: 2022/09/07 16:37:49 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
#include "ClapTrap.hpp"

class FragTrap  : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const FragTrap  &copy);
		void	operator=(const FragTrap &X );
		FragTrap(std::string name);
		void highFivesGuys(void);
		~FragTrap();
};

#endif 