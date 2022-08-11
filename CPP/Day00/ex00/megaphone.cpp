/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 14:08:52 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/07 16:04:56 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    if(ac == 1)
        return(std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0);
    for(int i = 1; i < ac; i++)
    {
        for(size_t j = 0; j < strlen(av[i]); j++)
            std::cout << (char) toupper(av[i][j]);
    }
    std::cout << std::endl;
}