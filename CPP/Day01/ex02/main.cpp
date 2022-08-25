/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:49:23 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/24 14:00:28 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{

    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "\nAddress of str         : "   << &str       << std::endl;
    std::cout << "Address of stringPTR   : "     << stringPTR  << std::endl;
    std::cout << "Address of stringREF   : "     << &stringREF << std::endl;

    std::cout << "\n\nValue of str           : " << str        << std::endl;
    std::cout << "Value of stringPTR     : "     << *stringPTR << std::endl;
    std::cout << "Value of stringREF     : "     << stringREF  << "\n\n" << std::endl;
}
