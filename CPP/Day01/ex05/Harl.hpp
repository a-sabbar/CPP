/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 11:03:09 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/19 22:42:27 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H

#include <iostream>
#include <string>


class Harl
{	
	public:
		Harl();
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		void	complain(std::string level);
		~Harl();
};


#endif