/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   include.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:22:16 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/28 15:56:55 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDE_HPP
# define INCLUDE_HPP

#include <iostream> 
#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>

typedef struct s_Data{
    uintptr_t nb;
    float n;
}Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);
#endif