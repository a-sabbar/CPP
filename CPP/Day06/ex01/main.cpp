/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 14:46:09 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/28 15:57:25 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Include.hpp"



int main()
{
    Data *C = new Data;
    uintptr_t Nb;

    C->nb = 1337;
    C->n = 2.36;
    std::cout << C << " ,  "<<  C->nb <<std::endl;
    Nb = serialize(C);
    std::cout << Nb<<std::endl;
    C = deserialize(Nb);
    std::cout << C << " ,  "<<  C->nb  << " ,  "<<  C->n <<std::endl;
}