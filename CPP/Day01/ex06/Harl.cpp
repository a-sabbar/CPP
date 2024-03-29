/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 11:03:12 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/19 22:42:37 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


Harl::Harl()
{
}

void	Harl::debug(void){
    std::cout << " [ DEBUG ]\n" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n" << std::endl;
}
void	Harl::info(void){
    std::cout << " [ INFO ]\n" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}
void	Harl::warning(void){
    
    std::cout << " [ WARNING ]\n" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void	Harl::error(void){
    
    std::cout << " [ ERROR ]\n" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void	Harl::complain(std::string level)
{
    std::string tab[4];
    Harl X;
    void (Harl::* ptf1) (void) = &Harl::debug;
    void (Harl::* ptf2) (void) = &Harl::info;
    void (Harl::* ptf3) (void) = &Harl::warning;
    void (Harl::* ptf4) (void) = &Harl::error;
    int         i;

    tab[0] = "DEBUG";
    tab[1] = "INFO";
    tab[2] = "WARNING";
    tab[3] = "ERROR";
    i = 0;
    while(tab[i] != level && i < 4)
        i++;
    switch (i)
    {
        case 0:
            (X.*ptf1) ();
        case 1:
            (X.*ptf2) ();
        case 2:
            (X.*ptf3) ();
        case 3:
            (X.*ptf4) ();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}

Harl::~Harl()
{
}
