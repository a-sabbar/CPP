/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 14:01:07 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/29 14:37:08 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixed_value(0)
{
}

Fixed::Fixed(Fixed const &F){
    *this = F;
}

Fixed::Fixed(const int fixed){
    this->fixed_value = fixed << this->f_bit;

}

Fixed::Fixed(const float fixed){
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


int Fixed::toInt( void ) const
{
    return(roundf(this->fixed_value >> this->f_bit));
}

Fixed::~Fixed(){
}

std::ostream &operator<<(std::ostream &output, const Fixed &X )
{
	output << X.toFloat();
	return(output);
}


void Fixed::operator=(const Fixed &X )
{
    this->fixed_value = X.getRawBits();
}

Fixed Fixed::operator++(void)
{
    this->fixed_value++;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed C;

    C = *this;
    this->fixed_value++;
    return (C);
}


Fixed Fixed::operator--(void )
{
    this->fixed_value--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed C;

    C = *this;
    this->fixed_value--;
    return (C);
}

Fixed Fixed::operator*(const Fixed &X )
{
    Fixed C;

    C.fixed_value = (this->toFloat() * X.toFloat()) * (1 << this->f_bit);
    return (C);
}

Fixed Fixed::operator+(const Fixed &X )
{
    Fixed C;

    C.fixed_value = (this->toFloat() + X.toFloat()) * (1 << this->f_bit);
    return (C);
}

Fixed Fixed::operator-(const Fixed &X )
{
    Fixed C;

    C.fixed_value = (this->toFloat() - X.toFloat()) / (1 << this->f_bit);
    return (C);
}


Fixed Fixed::operator/(const Fixed &X )
{
    Fixed C;

    C.fixed_value = (this->toFloat() / X.toFloat()) * (1 << this->f_bit);
    return (C);
}

bool Fixed::operator<(const Fixed &X )
{
    if(this->fixed_value < X.getRawBits())
        return(true);
    else
        return(false);
}

bool Fixed::operator>(const Fixed &X )
{
    if(this->fixed_value > X.getRawBits())
        return(true);
    else
        return(false);
}


bool Fixed::operator<=(const Fixed &X )
{
    if(this->fixed_value <= X.getRawBits())
        return(true);
    else
        return(false);
}

bool Fixed::operator>=(const Fixed &X )
{
    if(this->fixed_value >= X.getRawBits())
        return(true);
    else
        return(false);
}
bool Fixed::operator==(const Fixed &X )
{
    if(this->fixed_value == X.getRawBits())
        return(true);
    else
        return(false);
}
bool Fixed::operator!=(const Fixed &X )
{
    if(this->fixed_value != X.getRawBits())
        return(true);
    else
        return(false);
}


 Fixed &Fixed::min(Fixed &F1, Fixed &F2)
{
    if(F1 < F2)
        return(F1);
    return(F2);
}

 Fixed &Fixed::max(Fixed &F1, Fixed &F2)
{
    if(F1 < F2)
        return(F2);
    return(F1);
}

const Fixed &Fixed::min(const Fixed &F1, const Fixed &F2)
{
    if(F1.toFloat() < F2.toFloat())
        return(F1);
    return(F2);
}

const Fixed &Fixed::max(const Fixed &F1, const Fixed &F2)
{
    if(F1.toFloat() > F2.toFloat())
        return(F1);
    return(F2);
}