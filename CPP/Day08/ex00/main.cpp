/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 14:52:03 by asabbar           #+#    #+#             */
/*   Updated: 2022/09/02 23:21:49 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Easyfind.hpp"
#include <iostream>
#include <iterator>
#include <list>
int main()
{
    std::list<char> gqlist1;
  
    for (int i = 97; i < 107; ++i) {
        gqlist1.push_back(i + 1);
    }
    std::cout << easyfind(gqlist1, 100) << std::endl;

    /**************************************/

    std::list<int> gqlist2;
  
    for (int i = 0; i < 20; ++i) {
        gqlist2.push_back(i * 1);
    }
    std::cout << easyfind(gqlist2, 100) << std::endl;
    std::list<int>::iterator it;
}