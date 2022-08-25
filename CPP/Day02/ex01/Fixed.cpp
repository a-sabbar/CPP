/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 14:01:07 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/23 12:36:40 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixed_value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &F){
    std::cout << "Copy constructor called"   << std::endl;
    *this = F;
}

Fixed::Fixed(const int fixed){
    std::cout << "Int constructor called" << std::endl;
    this->fixed_value = fixed << this->f_bit;

}

Fixed::Fixed(const float fixed){
    std::cout << "Float constructor called " << std::endl;
    this->fixed_value = (int)roundf((fixed * (1 << this->f_bit)));
}


int Fixed::getRawBits( void ) const{
    return (this->fixed_value);
}

void Fixed::setRawBits(int const raw ){
    this->fixed_value = raw;   
}

float Fixed::toFloat( void ) const{
    return (float)this->fixed_value  / (1 << this->f_bit);
}

void Fixed::operator=(const Fixed &X )
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixed_value = X.getRawBits();
}

int Fixed::toInt( void ) const
{
    return(roundf(this->fixed_value >> this->f_bit));
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &output, const Fixed &X )
{
	output << X.toFloat();
	return(output);
}