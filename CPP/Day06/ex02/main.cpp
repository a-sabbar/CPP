/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:43:19 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/28 16:06:04 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <cstdlib>
#include "A.hpp"
#include "B.hpp"
#include "Base.hpp"
#include "C.hpp"

int main ()
{
    Base *Hello;

    Hello = generate();

    identify(Hello);
    identify(*Hello);
}