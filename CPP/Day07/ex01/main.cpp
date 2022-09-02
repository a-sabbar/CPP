/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 18:38:28 by asabbar           #+#    #+#             */
/*   Updated: 2022/09/02 12:03:53 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Iter.hpp"
int main()
{
    int arry[4] ={ 1, 3, 3, 7};
    iter(arry, 4, function);
    char arry1[7] ={ ' ', 'a', 'c', 'h', 'r', 'a', 'f'};
    iter(arry1, 7, function);
    std::cout << std::endl;
}