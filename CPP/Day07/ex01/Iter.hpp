/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 18:41:07 by asabbar           #+#    #+#             */
/*   Updated: 2022/09/02 12:02:53 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template <typename t>

void iter(t arr[], int len, void (*f)(t arr))
{
	int i;

	i = -1;
	while(++i < len)
		f(arr[i]);
}

template <typename t>
void function(t arr)
{
	std::cout << arr;
}
#endif