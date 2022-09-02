/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 14:01:07 by asabbar           #+#    #+#             */
/*   Updated: 2022/09/01 15:59:41 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fixed_value = 0;
}

Fixed::Fixed(Fixed const &F){
    std::cout << "Copy constructor called" << std::endl;
    *this = F;
    // this->fixed_value = F.getRawBits();
}

int Fixed::getRawBits( void ) const{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixed_value);
}

void Fixed::setRawBits(int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    this->fixed_value = raw;   
}
void Fixed::operator=(const Fixed &X )
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixed_value = X.getRawBits();
}
Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}