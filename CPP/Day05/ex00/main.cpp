/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 22:58:18 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/20 22:15:45 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat bob("achraf", 3);
        Bureaucrat gog("sabbar", 1);
        /*****************************  Incrementing ******************************/
            std::cout<<"\n        **********  Incrementing *********          ";
            std::cout<< "\n\n";
            try
            {
                std::cout << "        "<< bob << std::endl;
                bob.incrementing();
                std::cout << "        "<< bob << std::endl;
                bob.incrementing();
                std::cout << "        "<< bob << std::endl;
                bob.incrementing();
            }
            catch(const std::exception  &e)
            {
                std::cerr << "        "<< e.what() << '\n';
            }
            std::cout<<"        **********  Decrementing *********          ";
            std::cout<< "\n\n";
        /*****************************  Decrementing    ******************************/
            try
            {
                std::cout << "        "<< gog << std::endl;
                gog.decrementing();
                std::cout << "        "<< gog << std::endl;
                gog.decrementing();
                std::cout << "        "<< gog << std::endl;
                gog.decrementing();
            }
            catch(const std::exception  &e)
            {
                std::cerr << "        "<< e.what() << '\n';
            }
            std::cout<< "\n\n";
    }
    catch(const std::exception  &e)
    {
        std::cerr << "        "<< e.what() << '\n';
    }
}