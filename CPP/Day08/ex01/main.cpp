/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 19:21:23 by asabbar           #+#    #+#             */
/*   Updated: 2022/09/03 17:18:42 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"

int main()
{
    try
    {
        Span sp = Span(5);
        sp.addNumber(9);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
    return 0;
}