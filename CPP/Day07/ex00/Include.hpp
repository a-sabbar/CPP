/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Include.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 17:18:03 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/31 19:04:36 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDE_HPP
# define INCLUDE_HPP

# include <iostream>
# include <string>

template <typename t>
void swap(t &x, t &y)
{
	t temp;
	temp = x;
	x = y;
	y = temp;
}

template <typename t>
t min(t x, t y)
{
	if (x > y)
		return(y);
	return(x);
}

template <typename t>
t max(t x, t y)
{
	if (y > x)
		return(y);
	return(x);
}

#endif