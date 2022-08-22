/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 11:03:12 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/21 21:17:42 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

void	Harl::debug(void){
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}
void	Harl::info(void){
    
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}
void	Harl::warning(void){
    
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}
void	Harl::error(void){
    
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}


void	Harl::complain(std::string level)
{
    std::string tab[4];
    Harl        X;
    int         i;
    void (Harl::* ptf1) (void) = &Harl::debug;
    void (Harl::* ptf2) (void) = &Harl::info;
    void (Harl::* ptf3) (void) = &Harl::warning;
    void (Harl::* ptf4) (void) = &Harl::error;
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
        break;
    case 1:
        (X.*ptf2) ();
        break;
    case 2:
        (X.*ptf3) ();
        break;
    case 3:
        (X.*ptf4) ();
        break;
    default:
        break;
    }
}

Harl::~Harl()
{
}
