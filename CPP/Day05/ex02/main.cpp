/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 22:58:18 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/20 23:58:14 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat bob("achraf", 3);
        Bureaucrat gog("sabbar", 1);
        Form        tot("mester", 1, 150);
        /*****************************  check if Signed ******************************/
            std::cout<<"\n**********  check if Signed *********          ";
            std::cout<< "\n\n";
            try
            {
                tot.beSigned(bob);
            }
            catch(const std::exception  &e)
            {
                std::cerr << ""<< e.what() << '\n';
            }
            std::cout<<"\n**********  sign form *********          ";
            std::cout<< "\n\n";
        /*****************************  sign form    ******************************/
            try
            {
                bob.signForm(tot);
            }
            catch(const std::exception  &e)
            {
                std::cerr << ""<< e.what() << '\n';
            }
            std::cout<< "\n\n";
    }
    catch(const std::exception  &e)
    {
        std::cerr << ""<< e.what() << '\n';
    }
}